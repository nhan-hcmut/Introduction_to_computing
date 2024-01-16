#include<iostream>
using namespace std;
#define PI 3.14159265

int main() {

    float r = 0, d = 0, p = 0, s = 0;

    cout << "Radius: ";
    cin >> r;

    d = 2*r;
    p = 2*PI*r;
    s = PI*r*r;

    cout << "Diameter: " << d << endl
    << "Circumference: " << p << endl
    << "Area: " << s;

    return 0;
}
