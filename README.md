copy the unity folder Unity Project task 1 folder into your unity scene. 
Then open the terminal and print the rosbridge connection command-"roslaunch rosbridge_server rosbridge_websocket.launch".
then open another terminal and inititate the Thrusterforce.ccp script located in src/beginner_tutorials/src/Thrusterforce.cpp
To run the Thrusterforce script-
$ cd catkin_ws (Go to the root where you have copied the src folder)
$ catkin_make
$ source ./devel/setup.bash
$ rosrun beginner_tutorials Thrusterforce
run the Thrusterforce.cpp.
Not go back to unity window and play the scene.
Now using Thrusterforce give the values to the 3D object for its movement.
You will see the respective print statements in the unity console.
