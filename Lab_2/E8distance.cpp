#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float xa, ya; // Coordinate of point A
	float xb, yb; // Coordinate of point B
	float distance;

    cout << "Enter coordinate of point A" << endl;
    
	cout << "x: ";
	cin >> xa;

    cout << "y: ";
	cin >> ya;

    cout << "Enter coordinate of point B" << endl;
    
	cout << "x: ";
	cin >> xb;

    cout << "y: ";
	cin >> yb;
    
    distance = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    
    cout << "Distance: " << distance;

    return 0;
}