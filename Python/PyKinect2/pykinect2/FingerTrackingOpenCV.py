from pykinect2 import PyKinectV2
from pykinect2.PyKinectV2 import *
from pykinect2 import PyKinectRuntime

import ctypes
import _ctypes
from _ctypes import COMError
import comtypes
import sys
import numpy
import time

import cv2

# Initialize Kinect sensor
kinect = PyKinectRuntime.PyKinectRuntime(PyKinectV2.FrameSourceTypes_Color)

while(True):
    if kinect.has_new_color_frame():
        frame = kinect.get_last_color_frame()
        print(frame.shape)
        reshapedFrame = frame.reshape(1080, 1920, 4)
        cv2.imshow("frame", reshapedFrame)
        frame = None
        cv2.waitKey(20)