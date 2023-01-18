#include <iostream>
using namespace std;
string checkOddishEvenish(int number);

int main() 
{
    int number;

    cout << "Enter a five-digit number: ";
    cin >> number;
    string result = checkOddishEvenish(number);
    cout << "The number is " << result << "." << endl;

    return 0;
}
string checkOddishEvenish(int number) 
{
    int sum = 0;
    int digit = number;

    while (digit > 0) 
   {
        sum += digit % 10;
        digit /= 10;
    }

    if (sum % 2 == 0) 
    {
        return "Evenish";
    } else {
        return "Oddish";
    }
}