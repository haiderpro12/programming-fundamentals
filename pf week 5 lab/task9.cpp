#include <iostream>
#include <cmath>
using namespace std;

void solveQuadratic(double a, double b, double c) 
{
    double x1, x2;

    double discriminant = b*b - 4*a*c;

    if (discriminant > 0)
  {
        // Two real roots
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x1 = " << x1 << std::endl;
        cout << "x2 = " << x2 << std::endl;
    } else if (discriminant == 0) {
        // One real root
        x1 = -b / (2*a);
        cout << "x = " << x1 << std::endl;
    } else {
        // No real roots
        cout << "There are no real roots." << std::endl;
    }
}

int main() 
{
    double a = 5;
    double b = 6;
    double c = 1;

    solveQuadratic(a, b, c);

    return 0;
}
