#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance = 43;
    double angle = 30 * (M_PI / 180);  // Convert degrees to radians

    double height = distance * tan(angle);

    cout << "The height of the tree is " << height << " feet." << endl;

    return 0;
}
