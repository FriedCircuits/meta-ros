DESCRIPTION = "A generic driver for USB camera that are supported by V4L"
SECTION = "devel"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://package.xml;beginline=6;endline=6;md5=d566ef916e9dedc494f5f793a6690ba5"

DEPENDS = "image_transport roscpp std_msgs sensor_msgs self_test ffmpeg camera_info_manager"

require usb-cam.inc
