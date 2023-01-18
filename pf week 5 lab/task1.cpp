#include <iostream>
#include <cmath>
using namespace std;

float calculateheight(float degrees,float base);
main()
{
 	float base;
        float degrees;
	float height;
        cout << "enter base value: ";
	cin >> base;
        cout << "enter angle of elevation: ";
        cin >> degrees;
	
height= calculateheight(degrees,base);
cout << "height of tree is" << height << endl;

}
float calculateheight(float degrees,float base)
{
	 float radian = 57.2958;
 	float radians;
	float angle;
	float height;
	radians=degrees/radian;
	angle=tan(radians);
	height=angle*base;
	return height;



}