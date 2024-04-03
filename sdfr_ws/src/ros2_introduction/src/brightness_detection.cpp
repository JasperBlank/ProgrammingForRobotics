#include "ros2_introduction/brightness_detection.hpp"

BrightnessDetection::BrightnessDetection() : Node("brightness_detection") {
    // Initialize subscribers, publishers, parameters etc. here...

    subscriberImage_ = this->create_subscription<sensor_msgs::msg::Image>("image", 10, std::bind(&BrightnessDetection::image_callback, this, _1));
    publisherLightLevel_ = this->create_publisher<example_interfaces::msg::UInt8>("light_level", 10);
    publisherBrightnessStatus_ = this->create_publisher<example_interfaces::msg::String>("brightness_status", 10);
}

int BrightnessDetection::getLightLevel(sensor_msgs::msg::Image::ConstSharedPtr img, int* width, int* height){
    int sum = 0;
    for (int column = 0; column < *height; column++){
        for (int row = 0; row < *width; row++){
            sum += image_functions::getPixelBrightness(img, row, column);
        }
    }
    return sum / (*width * *height);
}

std::string BrightnessDetection::getBrightnessStatus(int light, const double threshold){
    if (light <= threshold){
        return "Low";
    }
    else{
        return "High";
    }
}

void BrightnessDetection::image_callback(sensor_msgs::msg::Image::ConstSharedPtr img) {
    // Define your brightness detection code here...

    // Get image dimensions
    imageWidth = image_functions::getImageWidth(img);
    imageHeight = image_functions::getImageHeight(img);

    // Calculate pixels average brightness level
    lightLevel = getLightLevel(img, &imageWidth, &imageHeight);

    // Determine brightness status description
    brightnessStatus = getBrightnessStatus(lightLevel, threshold);

    // Publish to light_level topic
    auto lightLevelMsg = example_interfaces::msg::UInt8();
    lightLevelMsg.data = lightLevel;
    publisherLightLevel_->publish(lightLevelMsg);

    // Publish to brightness_status topic
    auto brightnessStatusMsg = example_interfaces::msg::String();
    brightnessStatusMsg.data = brightnessStatus;
    publisherBrightnessStatus_->publish(brightnessStatusMsg);

    RCLCPP_INFO(this->get_logger(), "\nLight Level: %d, Brightness Status: %s\n", lightLevel, brightnessStatus.c_str());
}

// The main function starts the node and "spins" it, i.e. handles all ROS2-related events such as receiving messages on topics
// You rarely need to add anything else to this function for ROS2 nodes
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BrightnessDetection>());
    rclcpp::shutdown();
    return 0;
}
