#include<iostream>
using namespace std;

int main() {

    const double PI = 3.14159265;
    double r = 0;
    
    cout << "Radius: ";
    cin >> r;

    cout << "Circumference: " << 2*PI*r << endl;
    
    return 0;
}
