#include<iostream>
using namespace std;

int main() {

    int fn /* Fib n */, fn_2=0 /* Fib n-2 */, fn_1=1 /* Fib n-1 */, n, i=3;

    cout << "nth number in Fibonacci sequence: ";
    cin >> n;

    if (n==1) cout << "The first Fibonacci number is 0";

    else if (n==2) cout << "The second Fibonacci number is 1";

    else {

        while (i<=n) {

            fn = fn_1 + fn_2;
            fn_2 = fn_1;
            fn_1 = fn;
            i++;
        }
        cout << "Fib " << n << ": " << fn;
    }
    return 0;
}