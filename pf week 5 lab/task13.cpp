#include <iostream>
#include <cmath>
using namespace std;
int main
{
    int hours, minutes;

    cout << "Enter the hours: ";
    cin >> hours;

    cout << "Enter the minutes: ";
    cin >> minutes;

    minutes += 15;  // Add 15 minutes
    hours += minutes / 60;  // Update hours
    minutes %= 60;  // Update minutes

    // Adjust for 24-hour day
    if (hours >= 24) {
        hours %= 24;
 }

    // Print the result in hh:mm format
   cout << setfill('0') << setw(2) << hours << ":"
              << setfill('0') << setw(2) << minutes << endl;

    return 0;
}
