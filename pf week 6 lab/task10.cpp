#include <iostream>
using namespace std;

double calculatePrice(int n, string time);

int main() 
{
    int n;
    string time;
    cout << "Enter number of kilometers: ";
    cin >> n;
    cout << "Enter time of travel (day/night): ";
    cin >> time;
    double price = calculatePrice(n, time);
    cout << "The cheapest price for travel is: " << price << " EUR" << endl;
    return 0;
}
double calculatePrice(int n, string time) 
{
    double taxiPrice = 0.70 + 0.79 * n;
    double busPrice = 0.09 * n;
    double trainPrice = 0.06 * n;

    if (time == "night") 
    {
        taxiPrice = 0.70 + 0.90 * n;
    }

    if (n >= 100) 
    {
        trainPrice = 0.06 * n;
    }
    else 
    {
        trainPrice = 9999999;
    }

    if (n >= 20) 
    {
        busPrice = 0.09 * n;
    }
    else 
    {
        busPrice = 9999999;
    }

    double minPrice = min(taxiPrice, min(busPrice, trainPrice));
    return minPrice;
}