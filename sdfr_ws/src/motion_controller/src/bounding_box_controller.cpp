#include "motion_controller/bounding_box_controller.hpp"

BoundingBoxController::BoundingBoxController() : Node("bounding_box_controller") {
    // Initialize subscribers, publishers, parameters etc. here...
    subscriberBoundingBox_ = this->create_subscription<robot_image_messages::msg::BallOutput>("bounding_box", 10, std::bind(&BoundingBoxController::boundingBoxCallback, this, _1));
    subscriberDebbugingTool_= this->create_subscription<sensor_msgs::msg::Image>("debugging_tool", 10, std::bind(&BoundingBoxController::debugCallback, this, _1));
    publisherTwist_ = this->create_publisher<geometry_msgs::msg::TwistStamped>("cmd_vel", 10);
    publisherTargetBox_ = this->create_publisher<sensor_msgs::msg::Image>("target_box", 10);
    this->declare_parameter("linear_gain", 1.0);
    this->declare_parameter("angular_gain", 1.0);
    this->declare_parameter("target_width", 100);
    this->declare_parameter("debug_view", false);
    }

    void BoundingBoxController::boundingBoxCallback(robot_image_messages::msg::BallOutput::ConstSharedPtr boundingBoxMsg){
        
        // Get received bounding box
        receivedTopLeft = boundingBoxMsg->top_left;
        receivedBottomRight = boundingBoxMsg->bottom_right;
        receivedBall = boundingBoxMsg->ball_check;

        // Get parameters
        linearGain = this->get_parameter("linear_gain").as_double();
        angularGain = this->get_parameter("angular_gain").as_double();
        targetWidth = this->get_parameter("target_width").as_int();

        // Define target bounding box
        targetCentreX = imageWidth / 2;

        // By default
        desiredVelocity.x = 0; desiredVelocity.y = 0; desiredVelocity.z = 0;
        desiredAngularVelocity.x = 0; desiredAngularVelocity.y = 0; desiredAngularVelocity.z = 0;

        // Check for ball
        if (receivedBall){        
            // Define received bounding box
            receivedCentreX = (receivedTopLeft[x] + receivedBottomRight[x]) / 2;
            receivedWidth = std::abs(receivedBottomRight[x] - receivedTopLeft[x]);
            receivedHeight = std::abs(receivedBottomRight[y] - receivedTopLeft[y]);

            if (receivedHeight > receivedWidth){ // for rectangular bounding box
                receivedWidth = receivedHeight;
            }
            // Calculate errors
            sizeError = targetWidth - receivedWidth;
            centreError = targetCentreX - receivedCentreX;

            // Calculate desired velocities
            desiredVelocity.x = sizeError * linearGain;
            desiredAngularVelocity.z = centreError * angularGain;
        }

        // Publish to cmd_vel topic
        auto twistMsg = std::make_shared<geometry_msgs::msg::TwistStamped>();
        twistMsg->twist.linear = desiredVelocity;
        twistMsg->twist.angular = desiredAngularVelocity;
        publisherTwist_->publish(*twistMsg);
    }

    void BoundingBoxController::debugCallback(sensor_msgs::msg::Image::ConstSharedPtr img){
        
        // Get parameter
        debugViewActivated = this->get_parameter("debug_view").as_bool();
        // Debug view
        if (debugViewActivated){
            imageWidth = image_functions::getImageWidth(img);
            imageHeight = image_functions::getImageHeight(img);

            auto debugImage = std::make_shared<sensor_msgs::msg::Image>();
            image_functions::copyImageProperties(debugImage, img);

            targetTopLeft[x] = (imageWidth - targetWidth) / 2;
            targetTopLeft[y] = (imageHeight - targetWidth) / 2;

            for (int row = targetTopLeft[y]; row <= targetTopLeft[y] + targetWidth; row++){
                // first and last row
                if (row == targetTopLeft[y] || row == targetTopLeft[y] + targetWidth){ 
                    for (int col = targetTopLeft[x]; col <= targetTopLeft[x] + targetWidth; col++){
                        image_functions::setPixelColor(debugImage, col, row, 255, 0, 0); // Red box
                    }
                }
                // middle rows
                else{ 
                    for (int col = targetTopLeft[x]; col <= targetTopLeft[x] + targetWidth; col++){
                        if (col == targetTopLeft[x] || col == targetTopLeft[x] + targetWidth){
                            image_functions::setPixelColor(debugImage, col, row, 255, 0, 0); // Red box
                        }
                }
                }
            }

            // Publish to topic target_box
            publisherTargetBox_->publish(*debugImage);
        }
    }

    // To run launch file write:
    // colcon build
    // ros2 launch motion_controller start_robot.launch.py


// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BoundingBoxController>());
    rclcpp::shutdown();
    return 0;
}