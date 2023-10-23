#include<iostream>
using namespace std;

int main() {

    int month;

    cout << "Month: ";
    cin >> month;

    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
        cout << "31 days";
    }
    else if (month==4 || month==6 || month==9 || month==11) {
        cout<<"30 days.";
    }
    else {
        cout << "28 (not leap years) or 29 days (leap years).";
    }

    return 0;
}