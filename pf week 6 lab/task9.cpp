#include <iostream>

using namespace std;

double calculateIncome(string screeningType, int rows, int columns);

int main() 
{
    string screeningType;
    int rows, columns;
    cout << "Enter the type of screening (Premiere, Normal, Discount): ";
    cin >> screeningType;
    cout << "Enter the number of rows in the hall: ";
    cin >> rows;
    cout << "Enter the number of columns in the hall: ";
    cin >> columns;
    double income = calculateIncome(screeningType, rows, columns);
    if (income < 0) 
    {
        cout << "Invalid screening type." << endl;
    } else 
    {
        cout << "Total income from tickets: " << income << " EUR" << endl;
    }
    return 0;
}

double calculateIncome(string screeningType, int rows, int columns) 
{
    double price;
    if (screeningType == "Premiere") 
    {
        price = 12.00;
    } 
    else if (screeningType == "Normal") 
    {
        price = 7.50;
    } 
    else if (screeningType == "Discount") 
    {
        price = 5.00;
    }
     else 
    {
        return -1; // Invalid screening type
    }
    int totalSeats = rows * columns;
    return totalSeats * price;
}