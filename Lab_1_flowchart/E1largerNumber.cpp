#include<iostream>
using namespace std;

int main() {

    float x = 0, y = 0, max = 0;

    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;

    if (x >= y) {
        max = x;
    }
    else {
        max = y;
    }

    cout << "The larger number is " << max << endl;

    return 0;
}
