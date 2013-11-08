DESCRIPTION = " A collection of node(let)s that stream images from USB cameras (UVC) and provide CameraInfo messages to consumers. Includes a two-camera node that provides rough synchronization for stereo vision. Currently uses the base driver from Morgan Quigley's uvc_cam package."
SECTION = "devel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://package.xml;beginline=23;endline=23;md5=25b516c94d60212cdc875cf609e2dca5"

DEPENDS = "roscpp camera_info_manager image_transport nodelet sensor_msgs"

require camera-umd.inc
