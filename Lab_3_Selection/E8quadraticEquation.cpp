#include<iostream>
using namespace std;

int main() {

    float a = 0, b = 0, c = 0, delta = 0;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        cout << "There are no real roots\n";
    }
    else if (delta == 0) {
        cout << "There is only one root\n";
    }
    else {
        cout << "There are two real roots\n";
    }

    return 0;
}
