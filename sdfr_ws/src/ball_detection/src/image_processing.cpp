#include "../include/ball_detection/find_ball.hpp"

// Function to convert ROS image to OpenCV image
cv::Mat FindBall::getCvImage(sensor_msgs::msg::Image::ConstSharedPtr img){
    cv::Mat_<cv::Vec3b> imageData(img->height, img->width, (cv::Vec3b*)&img->data[0]);
    imageData.copyTo(cvOutput);

    return cvOutput;
}

// Function to get binary image
cv::Mat FindBall::getBinaryImage(cv::Mat &cvImg){
    cvImg.copyTo(cvCopyImg); // create a copy
    cv::cvtColor(cvCopyImg, cvCopyImg, cv::COLOR_BGR2HSV); // Convert from BGR to HSV

    // Green definitions:
    hsvMin = cv::Scalar(30, 50, 50);
    hsvMax = cv::Scalar(90, 255, 255); 

    cv::inRange(cvCopyImg, hsvMin, hsvMax, cvCopyImg); // Filter green pixels
    cv::threshold(cvCopyImg, cvCopyImg, 1, 255, cv::THRESH_BINARY); // Convert binary image to grayscale

    return cvCopyImg;
}

// Draw bounding box
void FindBall::getBoundingBox(cv::Mat &binaryImg){
    // Get contours from image
    cv::findContours(binaryImg, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);

    // Get the largest contour
    largestArea = 0;
    for (size_t i = 0; i < contours.size(); i++) {
        area = cv::contourArea(contours[i]);
        if (area > largestArea){
            largestArea = area;
            circle = contours[i];
        }
    }

    // Filter only relevant size circle
    minRadius = binaryImg.rows / 20;
    minArea = M_PI * pow(minRadius, 2);

    if (largestArea >= minArea){
        ballDetected = true;

        // Generate bounding box
        boundingBox = cv::boundingRect(circle);

        // Store coordinates
        topLeft = {boundingBox.tl().x, boundingBox.tl().y};
        bottomRight = {boundingBox.br().x, boundingBox.br().y};
    }
    else {
        ballDetected = false;
    }
}

// Function to convert OpenCV image to ROS image
sensor_msgs::msg::Image FindBall::getRosImage(const cv::Mat &cvImg, sensor_msgs::msg::Image::ConstSharedPtr img){
    // Create a new sensor_msgs::msg::Image message
    auto rosMsg = std::make_shared<sensor_msgs::msg::Image>();

    // Copy properties from the template message
    image_functions::copyImageProperties(rosMsg, img);

    // Calculate the image size in bytes
    imageSize = cvImg.rows * cvImg.cols * cvImg.elemSize();

    // Allocate memory for the image data and copy the pixel values
    rosMsg->data.resize(imageSize);
    memcpy(rosMsg->data.data(), cvImg.data, imageSize);

    return *rosMsg;
}