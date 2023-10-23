#include<iostream>
using namespace std;

int main() {

    const double PI = 3.14159265;
    double r;
    
    cout << "Radius: ";
    cin >> r;

    cout << "Circumference: " << 2*PI*r;
    
    return 0;
}
