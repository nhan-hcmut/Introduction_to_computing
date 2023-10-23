#include<iostream>
using namespace std;

int main () {

    char code;

    cout << "Enter marriage code: ";
    cin >> code;

    switch (code) {

    case 'M' :
    cout << "Individual is married"; break;

    case 'm' :
    cout << "Individual is married"; break;

    case 'D' :
    cout << "Individual is divorced"; break;

    case 'd' :
    cout << "Individual is divorced"; break;

    case 'W' :
    cout << "Individual is widowed"; break;

    case 'w' :
    cout << "Individual is widowed"; break;

    default : cout << "An invalid code was entered";
    }
    
    return 0;
}