#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int number1,number2;
        cout << "enter number01: ";
	cin >> number1;
	cout << "enter number02: ";
	cin >> number2;
	cout << "smaller number: "<<min(number1,number2);
	return 0;
}