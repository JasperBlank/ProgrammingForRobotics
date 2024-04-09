#ifndef IMAGE_PROCESSING_HPP
#define IMAGE_PROCESSING_HPP

#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include "sensor_msgs/msg/image.hpp"
#include "image_functions_sdfr/image_functions.hpp" // header for image functions

class ImageProcessing{
    public:
        ImageProcessing();
        void getBinaryImage(auto &img, int &width, int &height); // check pointer

    private:
        // Tuple to array
        int x, y, z;
        
        // RGB to HSV
        std::array<int, 3>rgb;
        const int rgbFactor = 255;
        int CMin, CMax;
        int delta;
        enum rgbSpace {red, green, blue};
        enum hsvSpace {h, s, v}; // check
        int hue, saturation, value;

        // Get binary image
        std::tuple<int, int, int> rgbPixel;
        std::array<int, 3> hsvPixel;
        // HSV definitions for green (Hue, Saturation, Value)
        std::array<int, 3> hsvMin = {100, 50, 30};
        std::array<int, 3> hsvMax = {140, 100, 100};

        // Functions
        std::array<int, 3> tupleToArray(std::tuple<int, int, int> &tupleInput);
        std::array<int, 3> rgbToHsv(std::tuple<int, int, int> &rgbInput);
        bool isOutsideInterval(int &num, int &min, int &max);
        bool isGreen(std::array<int, 3> &pixel, std::array<int, 3> &greenMin, std::array<int, 3> &greenMax);
        

};

#endif /* IMAGE_PROCESSING_HPP */

        /*
        void green2Binary(auto img, int* width, int* height);
        std::tuple<int, int, int> getPixelChannels(auto img, int x, int y);
        bool isBetweenInterval(int &value, int &min, int &max);
        void setPixelColor(auto img, int x, int y, int ch1_value, int ch2_value, int ch3_value);
        void image_callback(auto img);

        /// Private variables.
        // Image properties

        // Pixel color
        std::tuple<int, int, int> rgbPixel;
        std::tuple<int, int, int> hsvPixel;
        // Open CV variables for HSV manipulation
        cv::Mat3b pixel(1,1);
        cv::Vec3b rgbVector;
        cv::Vec3b hsvVector;
        cv::Mat3b hsvMatrix;
        // HSV definitions for green (Hue, Saturation, Value)
        std::array<std::array<const int, tupleSize>, 1 > hsvMin = {100, 50, 30};
        std::array<std::array<const int, tupleSize>, 1 > hsvMax = {140, 100, 100};
        // 2D arrays
        std::array<std::array<int, 2 >, 1 > corner_1;
        std::array<std::array<int, 2 >, 1 > corner_2;
        bool isBallDetected;*/