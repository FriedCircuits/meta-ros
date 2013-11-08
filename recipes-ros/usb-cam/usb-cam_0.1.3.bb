DESCRIPTION = "A generic driver for USB camera that are supported by V4L"
SECTION = "devel"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://package.xml;beginline=6;endline=6;md5=d566ef916e9dedc494f5f793a6690ba5"

DEPENDS = "image-transport roscpp std-msgs sensor-msgs self-test ffmpeg camera-info-manager"

require usb-cam.inc
