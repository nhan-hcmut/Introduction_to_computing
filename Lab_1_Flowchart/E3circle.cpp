#include<iostream>
using namespace std;
#define PI 3.14159265

int main() {

    float radius = 0, diameter = 0, circumference = 0, area = 0;

    cout << "Radius: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * raius * radius;

    cout << "Diameter: " << diameter << endl
    << "Circumference: " << circumfernce << endl
    << "Area: " << area << endl;

    return 0;
}
