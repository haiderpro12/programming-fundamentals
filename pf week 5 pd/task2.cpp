#include <iostream>
using namespace std;

float taxCalculator(char type, float price) ;

int main() 
{
    char type;
    float price;
    cout << "Enter the vehicle type (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    float finalPrice = taxCalculator(type, price);
    if (finalPrice != -1) 
    {
        cout << "The final price on a vehicle of type " << type << " after adding the tax is $" << finalPrice << endl;
    }
    return 0;
}
float taxCalculator(char type, float price) 
{
    float taxRate;
    switch (type) 
    {
        case 'M':
            taxRate = 6;
            break;
        case 'E':
            taxRate = 8;
            break;
        case 'S':
            taxRate = 10;
            break;
        case 'V':
            taxRate = 12;
            break;
        case 'T':
            taxRate = 15;
            break;
        default:
            cout << "Invalid vehicle type" << endl;
            return -1;
    }
    float taxAmount = price * (taxRate / 100);
    return price + taxAmount;
}