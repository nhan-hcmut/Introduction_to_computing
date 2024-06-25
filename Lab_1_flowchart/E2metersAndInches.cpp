#include<iostream>
using namespace std;

int main() {

    float inches = 0, meters = 0;
    int sel = 0;

    cout << "Press 1: Inches to meters" << endl
    << "Press another number: Meters to inches" << endl
    << "Selection: ";
    
    cin >> sel;

    if (sel == 1) {

        cout << "Inches: ";
        cin >> inches;

        meters = inches * 2.54 / 100;

        cout << meters <<" meters\n";
    }

    else {

        cout << "Meters: ";
        cin >> meters;

        inches = meters * 100 / 2.54;

        cout << inches << " inches\n";
    }
    return 0;
}
