DESCRIPTION="Server side tools for authorization and authentication of ROS clients."
SRC_URI = "https://github.com/FriedCircuits/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "b11098227a8d65a23e828d8c7263616c"
SRC_URI[sha256sum] = "0a8ab46911aa76c804be67204272718bb35c81e44d87c7b9bed8606832f7ce48"

S = "${WORKDIR}/${ROS_SP}"

inherit catkin

ROS_SPN = "rosauth"
