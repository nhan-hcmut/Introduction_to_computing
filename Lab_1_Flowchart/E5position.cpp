#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float radius = 0, distance = 0, xO = 0, yO = 0, x = 0, y = 0; // Center O (xO, yO), point A (x, y)

    cout << "Point A" << endl;
    cout << "x: ";
    cin >> x;
    
    cout << "y: ";
    cin >> y;

    cout << "Center O" << endl;
    cout << "xO: ";
    cin >> x0;
    
    cout << "yO: ";
    cin >> y0;

    cout << "Radius of the circle: ";
    cin >> radius;

    distance = sqrt( (x-xO) * (x-xO) + (y-yO) * (y-yO) );

    if (distance == radius) {
        cout << "Point A is on the circle.\n";
    }
    else if (distance < radius) {
        cout << "Point A is inside the circle.\n";
    }
    else cout << "Point A is outside the circle.\n";

    return 0;
}
