#include<iostream>
using namespace std;

int main() {

    int month = 0;

    cout << "Month: ";
    cin >> month;

    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
        cout << "31 days\n";
    }
    else if (month==4 || month==6 || month==9 || month==11) {
        cout<<"30 days\n";
    }
    else {
        cout << "28 (not leap years) or 29 days (leap years)\n";
    }

    return 0;
}
