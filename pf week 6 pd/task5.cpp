#include <iostream>
#include <string>
using namespace std;

int main() {
// Declare variables for fruit, day of week, and quantity
string fruit;
string day;
double quantity;

// Get input from user for fruit, day of week, and quantity
cout << "Enter the name of the fruit (banana, apple, orange, grapefruit, kiwi, pineapple, grapes): ";
cin >> fruit;
cout << "Enter the day of the week (Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday): ";
cin >> day;
cout << "Enter the quantity: ";
cin >> quantity;

// Check if the input for day of the week is valid
if (day != "Monday" && day != "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday") {
    cout << "error" << endl;
    return 0;
}

// Check if the input for fruit is valid
if (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes") {
    cout << "error" << endl;
    return 0;
}

// Check if it is a weekday or weekend
if (day == "Saturday" || day == "Sunday") {
    // Weekend prices
    if (fruit == "banana") {
        cout << quantity * 2.70 << endl;
    } else if (fruit == "apple") {
        cout << quantity * 1.25 << endl;
    } else if (fruit == "orange") {
        cout << quantity * 0.90 << endl;
    } else if (fruit == "grapefruit") {
        cout << quantity * 1.60 << endl;
    } else if (fruit == "kiwi") {
        cout << quantity * 3.00 << endl;
    } else if (fruit == "pineapple") {
        cout << quantity * 5.60 << endl;
    } else if (fruit == "grapes") {
        cout << quantity * 4.20 << endl;
    }
} else {
    // Weekday prices
    if (fruit == "banana") {
        cout << quantity * 2.50 << endl;
    } else if (fruit == "apple") {
        cout << quantity * 1.20 << endl;
    } else if (fruit == "orange") {
        cout << quantity * 0.85 << endl;
    } else if (fruit == "grapefruit") {
        cout << quantity * 1.45 << endl;
    } else if (fruit == "kiwi") {
        cout << quantity * 2.70 << endl;
    } else if (fruit == "pineapple") {
        cout << quantity * 5.50 << endl;
    } else if (fruit == "grapes") {
        cout << quantity * 3.85 << endl;
    }
}
return 0;
}
