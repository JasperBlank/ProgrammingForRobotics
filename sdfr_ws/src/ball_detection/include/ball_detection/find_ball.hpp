#ifndef FIND_BALL_HPP
#define FIND_BALL_HPP

#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"

#include <iostream>
#include <opencv2/opencv.hpp> // Added to use OpenCV
#include <tuple>

#include "sensor_msgs/msg/image.hpp"
// Define message includes here...
#include "robot_image_messages/msg/ball_output.hpp" // topic bounding_box
#include "image_functions_sdfr/image_functions.hpp" // header for image functions

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

    // Functions
    cv::Mat getCvImage(sensor_msgs::msg::Image::ConstSharedPtr img);
    cv::Mat getBinaryImage(cv::Mat &cvImg);
    void getBoundingBox(cv::Mat &binaryImg);
    sensor_msgs::msg::Image getRosImage(const cv::Mat &cvImg, sensor_msgs::msg::Image::ConstSharedPtr img);
    void image_callback(sensor_msgs::msg::Image::ConstSharedPtr img);

    /// Private variables.

    cv::Mat cvImage;
    cv::Mat binaryImage;
    cv::Mat boundingBoxImage;

    cv::Mat cvOutput;
    cv::Mat cvCopyImg;

    // HSV (Hue, Saturation, Value) color scale in 
    // Open CV: H:[0-179], S:[0-255], V:[0-255]
    cv::Scalar hsvMin;
    cv::Scalar hsvMax; 

    // Define minimum area
    double minRadius;
    double minArea;

    std::vector<std::vector<cv::Point>> contours;
    std::vector<cv::Vec4i> hierarchy;
    double area;
    double largestArea;
    std::vector<cv::Point> circle;

    cv::Scalar boxColor = cv::Scalar(255, 0, 0); // Blue box
    cv::Rect boundingBox;
    bool ballDetected;

    std::array<int, 2> topLeft;
    std::array<int, 2> bottomRight;

    size_t imageSize;
    sensor_msgs::msg::Image rosImage;

    int debugOption;

    /// Subscriber variables.
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriberImage_;

    /// Publisher variables.
    rclcpp::Publisher<robot_image_messages::msg::BallOutput>::SharedPtr publisherBoundingBox_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisherDebbugingTool_;
};

#endif /* FIND_BALL_HPP */