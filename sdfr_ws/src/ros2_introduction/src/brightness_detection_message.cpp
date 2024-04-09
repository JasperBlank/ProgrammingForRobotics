#include "ros2_introduction/brightness_detection_message.hpp"

BrightnessDetectionMessage::BrightnessDetectionMessage() : Node("brightness_detection_message") {
    // Initialize subscribers, publishers, parameters etc. here...

    subscriberImage_ = this->create_subscription<sensor_msgs::msg::Image>("image", 10, std::bind(&BrightnessDetectionMessage::image_callback, this, _1));
    publisherBrightnessOutput_ = this->create_publisher<ros2_introduction_message::msg::Brightness>("brightness_output", 10);
}

int BrightnessDetectionMessage::getLightLevel(sensor_msgs::msg::Image::ConstSharedPtr img, int &width, int &height){
    int sum = 0;
    for (int column = 0; column < height; column++){
        for (int row = 0; row < width; row++){
            sum += image_functions::getPixelBrightness(img, row, column);
        }
    }
    return sum / (width * height);
}

std::string BrightnessDetectionMessage::getBrightnessStatus(int light, const double threshold){
    if (light <= threshold){
        return "Low";
    }
    else{
        return "High";
    }
}

void BrightnessDetectionMessage::image_callback(sensor_msgs::msg::Image::ConstSharedPtr img) {
    // Define your brightness detection code here...

    // Get image dimensions
    imageWidth = image_functions::getImageWidth(img);
    imageHeight = image_functions::getImageHeight(img);

    // Calculate pixels average brightness level
    lightLevel = getLightLevel(img, imageWidth, imageHeight);

    // Determine brightness status description
    brightnessStatus = getBrightnessStatus(lightLevel, threshold);

    // Publish to brightness_output topic
    auto brightnessOutputMsg = ros2_introduction_message::msg::Brightness();
    brightnessOutputMsg.brightness_level = lightLevel;
    brightnessOutputMsg.brightness_classification = brightnessStatus;
    publisherBrightnessOutput_->publish(brightnessOutputMsg);

    RCLCPP_INFO(this->get_logger(), "\nLight Level: %d, Brightness Status: %s\n", brightnessOutputMsg.brightness_level, brightnessOutputMsg.brightness_classification.c_str());

}

// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BrightnessDetectionMessage>());
    rclcpp::shutdown();
    return 0;
}