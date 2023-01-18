#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double number1, number2;

    cout << "Enter the base: ";
    cin >> number1;

    cout << "Enter the exponent: ";
    cin >> number2;

    double result = pow(number1, number2);

    cout << "Result: " << result << endl;

    return 0;
}
