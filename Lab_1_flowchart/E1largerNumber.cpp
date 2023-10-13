#include<iostream>
using namespace std;

int main() {

    float x, y, max;

    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;

    if (x > y) {
        max = x;
    }
    else {
        max = y;
    }

    cout << "The larger number is " << max;

    return 0;
}
