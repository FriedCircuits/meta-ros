SRC_URI = "https://github.com/ktossell/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "2f37da6f46e34bbe88a3075fbe9cae95"
SRC_URI[sha256sum] = "6305c6e6e0e03d5f2b5d6399dbf08d1697f32ac19a02567afff89029b4e83c5a"

S = "${WORKDIR}/${ROS_SP}/${ROS_BPN}"

inherit catkin

ROS_SPN = "camera_umd"
