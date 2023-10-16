#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter an integer: ";
    cin >> num;

    (num%2 != 0) ? cout << "Odd" : cout << "Even"; // I must NOT use if statement

    return 0;
}
