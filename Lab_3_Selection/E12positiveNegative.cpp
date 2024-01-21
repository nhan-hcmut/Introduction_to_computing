#include<iostream>
using namespace std;

int main() {

    int num = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive\n";
    }
    else if (num < 0) {
        cout << "Negative\n";
    }
    else {
        cout << "Zero\n";
    }

    return 0;
}
