#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double result = sqrt(number);

    cout << "The square root of " << number << " is " << result << endl;

    return 0;
}
