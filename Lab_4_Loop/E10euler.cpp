#include<iostream>
using namespace std;

int main() {

    long long n = 1, factorial = 0;
    double e = 1, addend = 0;

    do {
        factorial = 1;

        for (int i=1; i<=n; i++) {
            factorial *= i;
        }

        addend = 1.0 / factorial;
        e += addend;
        n++;
    }

    while (addend >= 0.000001);
    
    cout << "Euler's number = " << e << endl;

    return 0;
}
