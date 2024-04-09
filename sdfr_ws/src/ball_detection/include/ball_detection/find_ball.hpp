#ifndef FIND_BALL_HPP
#define FIND_BALL_HPP

#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"

#include "sensor_msgs/msg/image.hpp"
// Define message includes here...
#include "ball_detection_message/msg/ball_output.hpp" // topic bounding_box
#include "image_functions_sdfr/image_functions.hpp" // header for image functions
#include "image_processing.hpp"
// Placeholder for std::bind.
using std::placeholders::_1;

class FindBall : public rclcpp::Node {
public:
    FindBall();

private:
    /// Callback functions.
    /**
     * @brief Callback to process any incoming Image messages.
     * 
     * @param img The image that was received.
    */

    void image_callback(sensor_msgs::msg::Image::ConstSharedPtr img);

    /// Private variables.
    int imageWidth;
    int imageHeight;
    sensor_msgs::msg::Image::SharedPtr newImg;

    /// Subscriber variables.
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriberImage_;

    /// Publisher variables.
    //rclcpp::Publisher<ball_detection_message::msg::BallOutput>::SharedPtr publisherBoundingBox_; ADD LATER
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisherDebbugingTool_;
};

#endif /* FIND_BALL_HPP */