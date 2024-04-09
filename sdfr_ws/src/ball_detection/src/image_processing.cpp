#include "../include/ball_detection/image_processing.hpp"

// Constructor
ImageProcessing::ImageProcessing(){
}

// Function to convert tuple to array
std::array<int, 3> ImageProcessing::tupleToArray(std::tuple<int, int, int> &tupleInput){
    x = std::get<0>(tupleInput);
    y = std::get<1>(tupleInput);
    z = std::get<2>(tupleInput);

    return {x, y, z};
}

// Function to convert from RGB to HSV color space
 std::array<int, 3> ImageProcessing::rgbToHsv(std::tuple<int, int, int> &rgbInput){
    rgb = tupleToArray(rgbInput);
    for (auto& item : rgb){
        item /= rgbFactor;
    }

    CMin = *std::min_element(rgb.begin(), rgb.end());
    CMax = *std::max_element(rgb.begin(), rgb.end());
    delta = CMax - CMin;

    // Hue
    if (delta ==0){
        hue = 0;
    }
    else{
        if (CMax == rgb[red]){
            hue = 60 * ((rgb[green] - rgb[blue])/delta % 6);
        }
        else if (CMax == rgb[green]){
            hue = 60 * ((rgb[blue] - rgb[red])/delta + 2);
        }
        else if (CMax == rgb[blue]){
            hue = 60 * ((rgb[red] - rgb[green])/delta + 4);
        }
    }

    // Saturation
    if (CMax == 0){
        saturation = 0;
    }
    else {
        saturation = delta / CMax;
    }

    // Value
    value = CMax;

    return {hue, saturation, value};
}

// Function to check if a number is between an interval
bool ImageProcessing::isOutsideInterval(int &num, int &min, int &max){
    if (num <= min && num >= max){
        return true;
    }
    else {
        return false;
    }
}

// Function to check if the pixel is green
bool ImageProcessing::isGreen(std::array<int, 3> &pixel, std::array<int, 3> &greenMin, std::array<int, 3> &greenMax){
    for (int i = 0; i < 3; i++){
        if (isOutsideInterval(pixel[i], greenMin[i], greenMax[i])){
            return false;
        }
    }
    return true;
}

void ImageProcessing::getBinaryImage(auto &img, int &width, int &height){
    for (int column = 0; column < height; column++){
        for (int row = 0; row < width; row++){
            rgbPixel = image_functions::getPixelChannels(img, column, row);
            hsvPixel = rgbToHsv(rgbPixel); // Convert to array
            if (isGreen(hsvPixel, hsvMin, hsvMax)){
                image_functions::setPixelColor(img, column, row, 255, 255, 255); // Set color as white in RGB
            }
            else {
                image_functions::setPixelColor(img, column, row, 0, 0, 0); // Set color as black in RGB
            }
        }
    }
}