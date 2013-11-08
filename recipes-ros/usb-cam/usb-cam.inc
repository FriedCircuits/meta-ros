SRC_URI = "https://github.com/bosch-ros-pkg/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "7049af7487a67d63509c9cbaec1d629c"
SRC_URI[sha256sum] = "75f60a507ee93bad358717d373f24b26f671edb944835f8fb1430f71499f806b"

S = "${WORKDIR}/${ROS_SP}/${ROS_BPN}"

inherit catkin

ROS_SPN = "usb_cam"
