#include<iostream>
#include<math.h>
using namespace std;

int main() {

    long long n=0;

    double sign = 0, pi = 0, addend = 0, sum = 0;

    do {
        
        // Calculate (-1)^n

        if (n%2 == 0) sign = 1.0;

        else sign = -1.0;

        // Calculate each addend and sum

        addend = sign / (2.0*n + 1.0);
        sum += addend;
        n++;
    }
    
    while (abs(addend*4) >= 0.000001);

    cout << "Pi = " << sum*4 << endl;

    return 0;
}
