#include <iostream>
using namespace std;

int main() 
{
int examHour, examMinute, arrivalHour, arrivalMinute;
cout << "Enter exam starting time (hours): ";
cin >> examHour;
cout << "Enter exam starting time (minutes): ";
cin >> examMinute;
cout << "Enter hour of arrival: ";
cin >> arrivalHour;
cout << "Enter minutes of arrival: ";
cin >> arrivalMinute;

int examTime = examHour * 60 + examMinute;
int arrivalTime = arrivalHour * 60 + arrivalMinute;
int difference = arrivalTime - examTime;

if (difference < -30) 
{
    cout << "Late" << endl;
    if (difference <= -60) 
    {
        cout << abs(difference / 60) << ":";
        if (abs(difference % 60) < 10) 
        {
            cout << "0";
        }
        cout << abs(difference % 60) << " hours after the start" << endl;
    } else 
    {
        cout << abs(difference) << " minutes after the start" << endl;
    }
} else if (difference <= 0) 
{
    cout << "On time" << endl;
} else 
{
    cout << "Early" << endl;
    if (difference >= 60) 
    {
        cout << difference / 60 << ":";
        if (difference % 60 < 10) 
        {
            cout << "0";
        }
        cout << difference % 60 << " hours before the start" << endl;
    } else {
        cout << difference << " minutes before the start" << endl;
    }
}

return 0;
}




