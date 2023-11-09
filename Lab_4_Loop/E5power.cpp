#include<iostream>
using namespace std;

int main() {

    int base, power, result=1; // Result = 1 in case of power = 0

    cout << "Base number: ";
    cin >> base;

    cout << "Power: ";
    cin >> power;

    for (int i=1; i<=power; i++) { // Calculate the exponent if power >= 1
        result *= base;
    }

    if (power == 0) { // To remove the output "Base number raised to the power of -0"
        cout << base << " raised to the power of 0 = 1";
    }

    else {
        cout << base << " raised to the power of " << power << " = " << result << endl
        << base << " raised to the power of -" << power << " = " << 1.0/result;
    }

    return 0;
}