DESCRIPTION="Metapackage for core of ros arduino bridge."
SRC_URI = "https://github.com/FriedCircuits/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "d234de3059d1fd14578c6ba2dfef194e"
SRC_URI[sha256sum] = "a637b77e9122d0d77bb5946d1f50d3411ba370cc367ce2a3efe4fb1bb22e0879"

S = "${WORKDIR}/${ROS_SP}/${ROS_BPN}"

inherit catkin

ROS_SPN = "ros_arduino_bridge"
