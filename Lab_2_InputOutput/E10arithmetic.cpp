#include<iostream>
using namespace std;

int main() {

    int num1 = 0, num2 = 0, addition = 0, subtraction = 0, multiplication = 0, exponentiation = 1;
    float division = 0;

    cout << "The first integer: ";
    cin >> num1;

    cout << "The second integer: ";
    cin >> num2;

    addition = num1+num2;
    subtraction = num1-num2;
    multiplication = num1*num2;
    
    if (num2 != 0) {
        division = (float)num1 / (float)num2;
    }
    
    int i = 1;
    while (i <= num2) {
        exponentiation *= num1;
        i++;
    }

    cout << "Sum: " << addition << endl;
    cout << "Difference: " << subtraction << endl;
    cout << "Product: " << multiplication << endl;
    if (num2 != 0) {
        cout << "Quotient: " << division << endl;
    }
    else {
        cout << "Quotient: undefined because the second integer is 0\n";
    }
    cout << num1 << " raised to the power of " << num2 << ": " << exponentiation << endl;
    
    return 0;
}
