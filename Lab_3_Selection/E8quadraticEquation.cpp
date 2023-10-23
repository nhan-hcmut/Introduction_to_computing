#include<iostream>
using namespace std;

int main() {

    float a, b, c, delta;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        cout << "There are no real roots";
    }
    else if (delta == 0) {
        cout << "There is only one root";
    }
    else {
        cout << "There are two real roots";
    }

    return 0;
}