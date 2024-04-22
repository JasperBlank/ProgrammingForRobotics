#ifndef BOUNDING_BOX_CONTROLLER_HPP
#define BOUNDING_BOX_CONTROLLER_HPP

#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include <array>

#include "sensor_msgs/msg/image.hpp"
#include "image_functions_sdfr/image_functions.hpp" // header for image functions
// Define message includes here...
#include "robot_image_messages/msg/ball_output.hpp" // topic bounding_box
#include "geometry_msgs/msg/twist_stamped.hpp" // topic cmd_vel

// Placeholder for std::bind.
using std::placeholders::_1;

class BoundingBoxController : public rclcpp::Node {
public:
    BoundingBoxController();

private:
    /// Callback functions.
    /**
     * @brief Callback to process any incoming bounding box messages.
     * 
     * @param boundingBoxMsg, img The bounding box and the image that was received.
    */
    void boundingBoxCallback(robot_image_messages::msg::BallOutput::ConstSharedPtr boundingBoxMsg);
    void debugCallback(sensor_msgs::msg::Image::ConstSharedPtr img);

    /// Private variables.
    float linearGain;
    float angularGain;
    int targetWidth;
    int targetCentreX;

    enum Coordinates{x,y,z};
    std::array<int, 2>receivedTopLeft;
    std::array<int, 2>receivedBottomRight;
    bool receivedBall;
    int receivedCentreX;
    int receivedWidth;
    int receivedHeight;

    geometry_msgs::msg::Vector3 desiredVelocity;
    geometry_msgs::msg::Vector3 desiredAngularVelocity;

    int sizeError;
    int centreError;

    bool debugViewActivated;
    sensor_msgs::msg::Image debugImage;
    int imageWidth;
    int imageHeight;
    std::array<int,2>imageCentre;
    std::array<int,2>targetTopLeft;

    /// Subscriber variables.
    rclcpp::Subscription<robot_image_messages::msg::BallOutput>::SharedPtr subscriberBoundingBox_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriberDebbugingTool_;

    /// Publisher variables.
    rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr publisherTwist_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisherTargetBox_;
};

#endif /* BOUNDING_BOX_CONTROLLER_HPP */