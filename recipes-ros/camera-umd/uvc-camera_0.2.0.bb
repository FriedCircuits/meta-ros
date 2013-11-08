DESCRIPTION = " A collection of node(let)s that stream images from USB cameras (UVC) and provide CameraInfo messages to consumers. Includes a two-camera node that provides rough synchronization for stereo vision. Currently uses the base driver from Morgan Quigley's uvc_cam package."
SECTION = "devel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://package.xml;beginline=23;endline=23;md5=d566ef916e9dedc494f5f793a6690ba5"

DEPENDS = "roscpp camera_info_manager image_transport nodelet sensor_msgs"

require camera-umd.inc
