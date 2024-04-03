#include "ball_detection/find_ball.hpp"

FindBall::FindBall() : Node("find_ball") {
    // Initialize subscribers, publishers, parameters etc. here...

    subscriberImage_ = this->create_subscription<sensor_msgs::msg::Image>("image", 10, std::bind(&BrightnessDetectionMessage::image_callback, this, _1));
    publisherBrightnessOutput_ = this->create_publisher<ball_detection_message::msg::BallOutput>("bounding_box", 10);
}

void FindBall::image_callback(sensor_msgs::msg::Image::ConstSharedPtr img) {
    // Define your ball detection code here...
    
}

// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FindBall>());
    rclcpp::shutdown();
    return 0;
}