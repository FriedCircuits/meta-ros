DESCRIPTION="A node that provides a MJPEG server which is able to subscribe to any ROS image stream."
SRC_URI = "https://github.com/RobotWebTools/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${PV}.tar.gz"
SRC_URI[md5sum] = "290d200b22b135c48e9d5cf7b8e8b7cf"
SRC_URI[sha256sum] = "326a6dbce26935e8afa02603e9682d6cf3591bcc59cae793812a9bf2783607ca"

S = "${WORKDIR}/${ROS_SP}"

inherit catkin

ROS_SPN = "mjpeg_server"
