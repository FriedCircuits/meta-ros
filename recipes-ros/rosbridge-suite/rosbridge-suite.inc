DESCRIPTION="Metapackage for core of rosbridge."
SRC_URI = "https://github.com/robotwebtools/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "73c2e8d4f0a5118e5e83efa683715154"
SRC_URI[sha256sum] = "81c081ddd33c7f0151579c97182be76bd18b99ab200ffff99db6507b2408550f"

S = "${WORKDIR}/${ROS_SP}/${ROS_BPN}"

inherit catkin

ROS_SPN = "rosbridge_suite"
