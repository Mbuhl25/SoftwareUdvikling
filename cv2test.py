import cv2
import numpy as np

lower = np.array([15, 50, 20])
upper = np.array([35, 255, 255])

video = cv2.VideoCapture(0)

while True:
    success, img = video.read()
    image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

    yellowMask = cv2.inRange(image, lower, upper)

    cv2.imshow("mask", yellowMask)
    cv2.imshow("webcam", img)

    cv2.waitKey(1)