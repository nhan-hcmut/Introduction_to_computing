#include<iostream>
using namespace std;

int main() {

    long long factorial = 1; // Limit: factorial of 20. When the input is 21, the output will be a negative number.
    int num;

    cout << "Enter input: ";
    cin >> num;

    for (int i=2; i <= num; i++) {
        factorial *= i;
    }

    cout << num << "! = " << factorial;
    return 0;
}