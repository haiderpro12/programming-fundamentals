#include <iostream>
using namespace std;

int main() {
    int h, x, y;
    cin >> h >> x >> y;

    if (x < 0 || x > 2*h || y < 0 || y > 4*h) {
        cout << "outside" << endl;
    }
    else if (x >= h && x <= 2*h && y >= 3*h && y <= 4*h) {
        cout << "inside" << endl;
    }
    else if ((x == 0 || x == 2*h || y == 0 || y == 4*h) || (x == h && (y == 3*h || y == 4*h))) {
        cout << "border" << endl;
    }
    else {
        cout << "outside" << endl;
    }

    return 0;
}
