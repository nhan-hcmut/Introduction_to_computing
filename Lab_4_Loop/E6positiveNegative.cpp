#include<iostream>
using namespace std;

int main() {

    int n, positive=0, negative=0;
    float num;
    bool zero=false;

    cout << "How many real numbers: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Number " << i+1 << ": ";
        cin >> num;

        if (num < 0) negative++;

        else if (num > 0) positive++;

        else zero=true;
    }
    
    cout << "There are " << negative << " negative numbers and " << positive << " positive numbers.\n"
    << "There is/are number(s) zero(s).";
    
    return 0;
}