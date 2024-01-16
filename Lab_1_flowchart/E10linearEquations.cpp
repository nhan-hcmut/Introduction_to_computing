#include<iostream>
using namespace std;

int main() {

    float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;

    cout << "Equation system ax + by = c & dx + ey = f" << endl;
    
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "d = ";
    cin >> d;

    cout << "e = ";
    cin >> e;

    cout << "f = ";
    cin >> f;

    x = ( c*e - b*f ) / ( a*e - b*d );
    y = ( a*f - c*d ) / ( a*e - b*d );

    cout << "x = "<< x << endl
    << "y = " << y;

    return 0;
}
