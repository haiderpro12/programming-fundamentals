#include <iostream>
using namespace std;

bool isSymmetrical(int number)
{
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    return (digit1 == digit3) && (digit2 == digit2);
}

int main() {
    int number;

    cout << "Enter a three-digit number: ";
    cin >> number;

    bool result = isSymmetrical(number);

    if (result) 
    {
        cout << "The number is symmetrical." << endl;
    } 
      else 
    {
        cout << "The number is not symmetrical." << endl;
    }

    return 0;
}
