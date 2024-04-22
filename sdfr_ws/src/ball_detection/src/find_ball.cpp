#include "../include/ball_detection/find_ball.hpp"

FindBall::FindBall() : Node("find_ball") {
    // Initialize subscribers, publishers, parameters etc. here...

    subscriberImage_ = this->create_subscription<sensor_msgs::msg::Image>("image", 10, std::bind(&FindBall::image_callback, this, _1));
    publisherBoundingBox_ = this->create_publisher<robot_image_messages::msg::BallOutput>("bounding_box", 10); // custom message
    publisherDebbugingTool_ = this->create_publisher<sensor_msgs::msg::Image>("debugging_tool", 10);
    this->declare_parameter("debug_option", 0);
}

void FindBall::image_callback(sensor_msgs::msg::Image::ConstSharedPtr img) {    
    cvImage = getCvImage(img); // convert to OpenCV image

    binaryImage = getBinaryImage(cvImage);

    getBoundingBox(binaryImage);

    // Publish to bounding_box topic
    auto ballOutputMsg = robot_image_messages::msg::BallOutput();
    ballOutputMsg.top_left = topLeft;
    ballOutputMsg.bottom_right = bottomRight;
    ballOutputMsg.ball_check = ballDetected;
    publisherBoundingBox_-> publish(ballOutputMsg);

    debugOption = this->get_parameter("debug_option").as_int();

    if (debugOption != 0){
        if (debugOption == 1){
            cvImage = binaryImage;
        }
        else if (debugOption == 2 && ballDetected){
            cv::rectangle(cvImage, boundingBox, boxColor); // Draw bounding box
        }
        cv::cvtColor(cvImage, cvImage, cv::COLOR_BGR2RGB); // convert from BGR to RGB
        rosImage = getRosImage(cvImage, img); // convert to ROS image
        publisherDebbugingTool_->publish(rosImage);
        // TEST
        //cv::imshow("Debug test", cvImage);
        //cv::waitKey(1);
    }

    // To show the image do this:
    // ros2 run image_tools showimage --ros-args --remap /image:=/debugging_tool

    // To change the parameter do this:
    // ros2 param set /find_ball debug_option param_value
}

// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FindBall>());
    rclcpp::shutdown();
    return 0;
}