#include <iostream>
using namespace std;
double calculateBill(char serviceCode, int minutesUsed);

int main()
{
    char serviceCode;
    int minutesUsed;
    cout << "Enter the service code ('r' or 'R' for regular service, 'p' or 'P' for premium service): ";
    cin >> serviceCode;
    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;

    double bill = calculateBill(serviceCode, minutesUsed);

    if (bill != 0.0)
    {
        cout << "Service: ";
        if (serviceCode == 'r' || serviceCode == 'R')
        {
            cout << "Regular" << endl;
        }
        else if (serviceCode == 'p' || serviceCode == 'P')
        {
            cout << "Premium" << endl;
        }
        cout << "Minutes used: " << minutesUsed << endl;
        cout << "Amount due: $" << bill << endl;
    }
    return 0;
}

double calculateBill(char serviceCode, int minutesUsed)
{
    double bill = 0.0;
    if (serviceCode == 'r' || serviceCode == 'R')
    {
        bill = 10.00;
        if (minutesUsed > 50)
        {
            bill += (minutesUsed - 50) * 0.20;
        }
    }
    else if (serviceCode == 'p' || serviceCode == 'P')
    {
        bill = 25.00;
        int dayMinutes, nightMinutes;
        cout << "Enter the number of minutes used during the day: ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night: ";
        cin >> nightMinutes;
        if (dayMinutes > 75)
        {
            bill += (dayMinutes - 75) * 0.10;
        }
        if (nightMinutes > 100)
        {
            bill += (nightMinutes - 100) * 0.05;
        }
    }
    else
    {
        cout << "Invalid service code entered. Please enter 'r' or 'R' for regular service, or 'p' or 'P' for premium service." << endl;
    }
    return bill;
}

