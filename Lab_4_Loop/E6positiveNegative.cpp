#include<iostream>
using namespace std;

int main() {

    int n = 0, positive = 0, negative = 0;
    float num = 0;
    bool zero = false; // There is/are the number(s) zero(s) or not

    cout << "How many real numbers: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Number " << i+1 << ": ";
        cin >> num;

        if (num < 0) negative++;

        else if (num > 0) positive++;

        else zero = true;
    }
    
    cout << "There are " << negative << " negative numbers and " << positive << " positive numbers.\n";
    
    if (zero == true) cout << "There is/are number(s) zero(s).\n";
    
    return 0;
}
