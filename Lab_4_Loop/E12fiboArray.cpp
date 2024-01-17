#include<iostream>
using namespace std;

int main () {

    int size = 0;

    cout << "How many Fibonacci numbers: ";
    cin >> size;

    int* F = new int[size+1];

    F[0] = 0; // F[i] will store the ith number in Fibonacci sequence => THERE IS NO F[0]

    for (int i=1; i<=size; i++) {

        if (i==1) F[i] = 0;

        else if (i==2) F[i] = 1;

        else F[i] = F[i-1] + F[i-2];
    }

    for (int i=1; i<=size; i++) {
        cout << "F[" << i << "] = " << F[i] << endl;
    }
    
    delete[] F;

    return 0;
}
