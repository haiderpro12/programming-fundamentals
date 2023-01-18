#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height, string unit);

int main() 
{
    double length, width, height;
    string unit;
    cout << "Enter length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the unit in which you want to see the answer (millimeters/centimeters/meters/kilometers): ";
    cin >> unit;
    calculateVolume(length, width, height, unit);
    return 0;
}
double calculateVolume(double length, double width, double height, string unit) 
{
    double volume = (length * width * height) / 3;

    if (unit == "millimeters") 
    {
        volume *= 1000000;
    }
    else if (unit == "centimeters") 
    {
        volume *= 1000;
    }
    else if (unit == "kilometers") 
    {
        volume /= 1000;
    }

    cout << "The volume of the pyramid is: " << volume << " cubic " << unit << endl;
    return volume;
}
