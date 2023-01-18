#include <iostream>
#include <string>
using namespace std;

string checkCase(char ch) 
{
    if (ch >= 'a' && ch <= 'z') {
        return "lowercase";
    } else if (ch >= 'A' && ch <= 'Z') {
        return "uppercase";
    } else {
        return "not an alphabet";
    }
}

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    string result = checkCase(ch);
    cout << "The alphabet you entered is " << result << "." << endl;

    return 0;
}
