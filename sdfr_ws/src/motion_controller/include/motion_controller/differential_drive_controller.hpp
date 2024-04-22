#ifndef DIFFERENTIAL_DRIVE_CONTROLLER_HPP
#define DIFFERENTIAL_DRIVE_CONTROLLER_HPP

#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include <string>

#include "sensor_msgs/msg/image.hpp"
// Define message includes here...
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "example_interfaces/msg/float64.hpp"

// Placeholder for std::bind.
using std::placeholders::_1;

class DifferentialDriveController : public rclcpp::Node {
public:
    DifferentialDriveController();

private:
    /// Callback functions.
    /**
     * @brief Callback to process any incoming twist messages.
     * 
     * @param twistMsg The twist that was received.
    */
    void twistCallback(geometry_msgs::msg::TwistStamped::ConstSharedPtr twistMsg);

    /// Private variables.
    const float wheelDiameter = 0.101; // [m]
    const float robotWidth = 0.15; //[m]

    float wheelRadius; // [m]

    float velocity; // robot linear velocity
    float angularVelocity; // robot angular velocity

    std::string movingDirection;
    std::string turningDirection;

    float leftAngularVelocity; // left motor angular velocity
    float rightAngularVelocity; // right motor angular velocity

    /// Subscriber variables.
    rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr subscriberTwist_;

    /// Publisher variables.
    
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr publisherLeftMotor_;
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr publisherRightMotor_;
    
};

#endif /* DIFFERENTIAL_DRIVE_CONTROLLER_HPP */