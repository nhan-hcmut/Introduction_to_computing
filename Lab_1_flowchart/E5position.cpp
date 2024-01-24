#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float r = 0, distance = 0, x0 = 0, y0 = 0, x = 0, y = 0; // Center O (x0, y0), point A (x, y)

    cout << "Point A" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "Center O" << endl;
    cout << "x0: ";
    cin >> x0;
    cout << "y0: ";
    cin >> y0;

    cout << "Radius of the circle: ";
    cin >> r;

    distance = sqrt( (x-x0) * (x-x0) + (y-y0) * (y-y0) );

    if (distance == r) {
        cout << "Point A is on the circle.\n";
    }
    else if (distance < r) {
        cout << "Point A is inside the circle.\n";
    }
    else cout << "Point A is outside the circle.\n";

    return 0;
}
