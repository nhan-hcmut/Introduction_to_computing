#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float r, distance, x0, y0, x, y; // Center O (x0, y0), point A (x, y)

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
        cout << "Point A is on the circle.";
    }
    else if (distance < r) {
        cout << "Point A is inside the circle.";
    }
    else cout << "Point A is outside the circle.";

    return 0;
}