# Smart Home Security System (SHSS)

This project builds upon the "Enhanced Security Vision" project, transforming it into a full-fledged IoT-based smart home security system. It leverages computer vision, cloud computing, and IoT technologies to provide comprehensive home security with real-time monitoring, intelligent alerts, and remote access.

## Project Goals

*   Real-time remote monitoring and two-way communication via a mobile app.
*   Secure cloud storage of event data and recordings.
*   Intelligent event detection using computer vision and sensor data.
*   Automated alerts and notifications to homeowners.
*   Integration with smart home devices (potential future expansion).

## Core Features

*   **Real-time Video Streaming and Two-Way Audio:** Live video feed from connected cameras accessible through a mobile app, with two-way audio communication capabilities.
*   **Intelligent Motion and Intruder Detection:** Combines intensity change detection (from the original project), face detection, and motion sensor data to accurately identify potential intrusions.
*   **Cloud-Based Processing and Storage:** Leverages cloud computing for resource-intensive tasks like image enhancement and video processing, as well as secure storage of recorded events in a Firebase database.
*   **Automated Alerts and Notifications:** Sends real-time alerts to the homeowner's mobile app and can trigger local alarms (buzzers) based on detected events.
*   **Mobile Application Interface:** User-friendly mobile app for viewing live feeds, reviewing recorded events, managing system settings, and communicating through the cameras.
*   **Night Vision Enhancement:** Retains and improves the night vision capabilities from the original project, enhancing visibility in low-light conditions.
*   **Distance Measurement with Motion Sensors:** Integrates motion sensors to provide distance information, improving the accuracy of intrusion detection and potentially triggering actions based on proximity.

## System Architecture

The system consists of the following components:

*   **Camera Units:** IP cameras or webcams connected to a local network (Wi-Fi or Ethernet).
*   **Edge Device (Optional but Recommended):** A Raspberry Pi or similar device to handle local processing tasks (like intensity change detection) and act as a gateway to the cloud. This reduces latency and bandwidth usage.
*   **Cloud Platform (Firebase):** Used for database storage (event logs, recordings), user authentication, and push notifications.
*   **Mobile Application (Android/iOS):** Provides the user interface for monitoring, control, and alerts.
*   **Motion Sensors:** Connected to the edge device (if used) or directly to the camera units to detect movement and measure distances.
*   **Local Alarm (Buzzer):** Connected to the edge device or camera unit to provide an audible alarm.

## Software and Technologies

*   **Programming Languages:** Python (for backend and edge device), Java/Kotlin (Android), Swift/Objective-C (iOS) or cross-platform framework like Flutter/React Native.
*   **Computer Vision Libraries:** OpenCV.
*   **Cloud Platform:** Google Firebase (Realtime Database, Cloud Functions, Cloud Storage, Authentication, Cloud Messaging).
*   **IoT Protocols:** MQTT (for communication between devices and the cloud).
*   **Communication:** Wi-Fi, Ethernet, Cellular (for remote access).

## Improvements over "Enhanced Security Vision"

*   **Remote Access and Control:** Enables monitoring and control from anywhere with an internet connection.
*   **Two-Way Audio Communication:** Allows for real-time interaction with individuals at the monitored location.
*   **Cloud Integration:** Provides secure storage, scalable processing, and push notifications.
*   **Mobile Application:** Offers a user-friendly interface for managing the system.
*   **Motion Sensor Integration:** Enhances intrusion detection accuracy and adds distance measurement capabilities.
*   **Automated Alerts and Alarms:** Provides timely notifications and deterrents.
*   **Scalability:** Designed to support multiple cameras and users.

## Future Enhancements

*   Integration with other smart home devices (e.g., smart locks, lighting).
*   Facial recognition for personalized alerts and access control.
*   AI-powered event analysis for more intelligent threat detection.
*   Local video recording for redundancy.

This project aims to provide a robust and intelligent home security solution, leveraging the power of computer vision and IoT technologies.