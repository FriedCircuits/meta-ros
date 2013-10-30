DESCRIPTION = "A node that provides a MJPEG server which is able to subscribe to any ROS image stream."
SECTION = "devel"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://package.xml;beginline=10;endline=10;md5=d566ef916e9dedc494f5f793a6690ba5"

DEPENDS = "roscpp std-msgs roslib cv-bridge image-transport"

require mjpeg-server.inc
