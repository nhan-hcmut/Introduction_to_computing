#include<iostream>
using namespace std;

int main() {

    int num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    (num%2 != 0) ? cout << "Odd\n" : cout << "Even\n"; // I am NOT allowed to use if statement

    return 0;
}
