#include<iostream>
using namespace std;

int main() {

    int a = 0, b = 0, temp = 0;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After exchanging\n" <<
    "a = " << a << endl
    << "b = " << b << endl;

    return 0;
}
