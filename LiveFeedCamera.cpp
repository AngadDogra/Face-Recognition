/*
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

// Function to send a ping/alarm (e.g., using an LED or a simple print statement for this example)
void triggerAlarm() {
    std::cout << "ALARM! Poacher detected!" << std::endl;
    // Here you can add code to trigger an actual hardware alarm or send a network notification
    // For example, turning on an LED, sending an email, or sending a message via a communication module
}

int main() {
    // Path to the Haar Cascade file for human detection (assuming you're using a frontal face detection)
    std::string cascadePath = "C:/Extract/opencv/sources/data/haarcascades/haarcascade_frontalface_default.xml";
    cv::CascadeClassifier humanCascade;

    // Load the Haar Cascade classifier
    if (!humanCascade.load(cascadePath)) {
        std::cerr << "Error loading Haar Cascade file" << std::endl;
        return -1;
    }

    // Open the default camera (usually the webcam)
    cv::VideoCapture cap(0);  // 0 is the ID for the default camera

    // Check if the camera opened successfully
    if (!cap.isOpened()) {
        std::cerr << "Error opening video stream" << std::endl;
        return -1;
    }

    // Main loop to process the live camera feed
    while (true) {
        cv::Mat frame;
        // Capture a new frame from the camera
        cap >> frame;

        // If the frame is empty, break the loop (end of the video feed)
        if (frame.empty()) {
            break;
        }

        // Detect humans in the frame
        std::vector<cv::Rect> humans;
        humanCascade.detectMultiScale(frame, humans, 1.1, 3, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

        // If humans are detected, trigger the alarm
        if (!humans.empty()) {
            triggerAlarm();
        }

        // Draw rectangles around the detected humans
        for (size_t i = 0; i < humans.size(); i++) {
            cv::rectangle(frame, humans[i], cv::Scalar(255, 0, 0), 2);
        }

        // Display the frame with detected humans
        cv::imshow("Detected Humans", frame);

        // Break the loop if the user presses the 'Esc' key
        if (cv::waitKey(10) == 27) {
            break;
        }
    }

    // Release the video capture object and close all OpenCV windows
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
*/
