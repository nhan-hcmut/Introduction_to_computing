#include<iostream>
using namespace std;

int main() {

    float a = 0, m = 0, inc = 0;
    int sel = 0;

    cout << "Press 1: Inches to meters" << endl
    << "Press another number: Meters to inches" << endl
    << "Enter a number: ";
    
    cin >> sel;

    if (sel == 1) {

        cout << "Inches: ";
        cin >> a;

        m = a*2.54/100;

        cout << m <<" meters\n";
    }

    else {

        cout << "Meters: ";
        cin >> a;

        inc = a*100/2.54;

        cout << inc << " inches\n";
    }
    return 0;
}
