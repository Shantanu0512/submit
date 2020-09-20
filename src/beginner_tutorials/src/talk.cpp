#include<ros/ros.h>
#include<beginner_tutorials/Num.h>
void Get_data(beginner_tutorials::Num& msg1){
int i;
  for( i=0;i<3;i++){
   std::cout<<"Write something!";
  std::cin>>msg1.linear_acceleration[i];
   }
int j;
  for( j=0;j<3;j++){
   std::cout<<"Write something!";
  std::cin>>msg1.angular_velocity[j];
   }
int k;
  for( k=0;k<3;k++){
   std::cout<<"Write something!";
  std::cin>>msg1.rotation[k];
   }
 }
void Return_message_type(){
  ROS_INFO("Message_Type=CombinedInfo"); 
} 
int main(int argc ,char** argv)
{
   ros::init(argc, argv, "Lets_talk");
   ros::NodeHandle nha;
   ros:: Publisher publ = nha.advertise<beginner_tutorials::Num>("continousCombinedInfo",1000);
   beginner_tutorials:: Num msg;
   while(ros::ok())
{  Get_data(msg);
   
   publ.publish(msg);
   ros::spinOnce();
  
}
  return 0;
}
