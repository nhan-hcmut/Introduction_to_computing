#include<iostream>
using namespace std;

int main() {

    int a, b, temp;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After exchanging\n" <<
    "a = " << a << endl
    << "b = " << b;

    return 0;
}