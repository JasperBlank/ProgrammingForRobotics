#ifndef BRIGHTNESS_DETECTION_MESSAGE_HPP
#define BRIGHTNESS_DETECTION_MESSAGE_HPP

#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"

#include "sensor_msgs/msg/image.hpp"
// Define message includes here...
#include "ros2_introduction_message/msg/brightness.hpp" // topic brightness_output
#include "image_functions_sdfr/image_functions.hpp" // header for image functions

// Placeholder for std::bind.
using std::placeholders::_1;

class BrightnessDetectionMessage : public rclcpp::Node {
public:
    BrightnessDetectionMessage();

private:
    /// Callback functions.
    /**
     * @brief Callback to process any incoming Image messages.
     * 
     * @param img The image that was received.
    */
    void image_callback(sensor_msgs::msg::Image::ConstSharedPtr img);
    int getLightLevel(sensor_msgs::msg::Image::ConstSharedPtr img, int &width, int &height);
    std::string getBrightnessStatus(int light, const double threshold);

    /// Private variables.
    int imageWidth;
    int imageHeight;

    const double threshold = 50; //CHANGE THIS

    int lightLevel;
    std::string brightnessStatus;

    /// Subscriber variables.
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriberImage_;

    /// Publisher variables.
    rclcpp::Publisher<ros2_introduction_message::msg::Brightness>::SharedPtr publisherBrightnessOutput_;
};

#endif /* BRIGHTNESS_DETECTION_MESSAGE_HPP */