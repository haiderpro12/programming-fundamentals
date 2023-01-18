#include <iostream>
using namespace std;
string checkSpeed(float);
main()
{
    
   float speed;
   cout << "speed is: ";
    cin>> speed;
  string speedss= checkSpeed(speed);
  cout<<speedss;
}
string checkSpeed(float speed)
{
 string speeds;   
 if (speed <=10)
{
 speeds = "slow";
}
 if(speed > 10 && speed <= 50 )
 {
 speeds = "average";
}
 if(speed > 50 && speed <= 150 )
 {
speeds = "fast";
 }

 if(speed > 150 && speed <= 1000)
 {
   speeds = "ultra fast";

 }
 if(speed > 1000)
 {
    speeds = "extremely fast";
 }
 return speeds;
}