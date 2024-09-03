/*
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main() {
    // Path to the image
    std::string imagePath = "C:/Users/angad/Pictures/Screenshots/stoner_enemy.jpg";

    // Load the image
    cv::Mat image = cv::imread(imagePath);

    // Check if the image is loaded successfully
    if (image.empty()) {
        std::cerr << "Could not open or find the image" << std::endl;
        return -1;
    }

    // Load the Haar Cascade classifier
    std::string cascadePath = "C:/Extract/opencv/sources/data/haarcascades/haarcascade_frontalface_default.xml";
    cv::CascadeClassifier faceCascade;

    if (!faceCascade.load(cascadePath)) {
        std::cerr << "Error loading face cascade" << std::endl;
        return -1;
    }

    // Detect faces
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(image, faces, 1.1, 3, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

    // Draw rectangles around the faces
    for (size_t i = 0; i < faces.size(); i++) {
        cv::rectangle(image, faces[i], cv::Scalar(255, 0, 0), 2);
    }

    // Display the result
    cv::imshow("Detected Faces", image);
    cv::waitKey(0); // Wait for a key press

    return 0;
}
*/

