#include<iostream>
using namespace std;

int main() {

    int num1, num2, addition, subtraction, multiplication;
    float division;

    cout << "The first integer: ";
    cin >> num1;

    cout << "The second integer: ";
    cin >> num2;

    addition = num1+num2;
    subtraction = num1-num2;
    multiplication = num1*num2;
    division = float(num1) / float(num2);

    cout << "Sum: " << addition << endl;
    cout << "Difference: " << subtraction << endl;
    cout << "Product: " << multiplication << endl;
    cout << "Quotient: " << division;
    
    return 0;
}