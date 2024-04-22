#include "motion_controller/differential_drive_controller.hpp"

DifferentialDriveController::DifferentialDriveController() : Node("differential_drive_controller") {
    subscriberTwist_ = this->create_subscription<geometry_msgs::msg::TwistStamped>("cmd_vel", 10, std::bind(&DifferentialDriveController::twistCallback, this, _1));
    publisherLeftMotor_ = this->create_publisher<example_interfaces::msg::Float64>("input/left_motor/setpoint_vel", 10);
    publisherRightMotor_ = this->create_publisher<example_interfaces::msg::Float64>("input/right_motor/setpoint_vel", 10);
}

void DifferentialDriveController::twistCallback(geometry_msgs::msg::TwistStamped::ConstSharedPtr twistMsg) {
    // Get wheel radius
    wheelRadius = wheelDiameter / 2;

    // Get robot velocity from twist
    velocity = twistMsg->twist.linear.x;
    angularVelocity = twistMsg->twist.angular.z;

    if(velocity == 0){
        RCLCPP_INFO_EXPRESSION(this->get_logger(), angularVelocity == 0, "\nStopped\n");
        RCLCPP_INFO_EXPRESSION(this->get_logger(), angularVelocity > 0, "\nRotating counterclockwise\n");
        RCLCPP_INFO_EXPRESSION(this->get_logger(), angularVelocity < 0, "\nRotating clockwise\n");
    }
    else{ // velocity != 0
        // Get moving direction
        if (velocity > 0){
            movingDirection = "forward";
        }
        else if (velocity < 0){
            movingDirection = "backwards";
        }
        // Get turning direction
        if (velocity * angularVelocity > 0){
            turningDirection = "left";
        }
        else if (velocity * angularVelocity < 0){
            turningDirection = "right";
        }
        else if (angularVelocity == 0){
            turningDirection = "straight";
        }
        RCLCPP_INFO_EXPRESSION(this->get_logger(), turningDirection == "straight", "\nMoving %s\n", movingDirection.c_str());
        RCLCPP_INFO_EXPRESSION(this->get_logger(), turningDirection != "straight", "\nMoving %s to the %s\n", movingDirection.c_str(), turningDirection.c_str());
    } // Logging might be useful to identify hardware problems, identify if there is an error of calculation (Twist)

    // Calculate motor velocity
    leftAngularVelocity = (velocity - (angularVelocity * robotWidth / 2)) / wheelRadius;
    rightAngularVelocity = (velocity + (angularVelocity * robotWidth / 2)) / wheelRadius;

    // Publish to the input/left_motor/setpoint_vel topic
    auto leftMotorMsg = std::make_shared<example_interfaces::msg::Float64>();
    leftMotorMsg->data = leftAngularVelocity;
    publisherLeftMotor_->publish(*leftMotorMsg);
    
    // Publish to the input/right_motor/setpoint_vel topic
    auto rightMotorMsg = std::make_shared<example_interfaces::msg::Float64>();
    rightMotorMsg->data = rightAngularVelocity;
    publisherRightMotor_->publish(*rightMotorMsg);

    RCLCPP_INFO(this->get_logger(), "\nLeft motor: %f, Right motor: %f\n", leftAngularVelocity, rightAngularVelocity);
}

// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DifferentialDriveController>());
    rclcpp::shutdown();
    return 0;
}