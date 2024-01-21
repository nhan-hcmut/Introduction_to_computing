#include<iostream>
using namespace std;

int main () {

    char code = '\0';

    cout << "Enter marriage code: ";
    cin >> code;

    switch (code) {

    case 'M' :
    cout << "Individual is married\n"; break;

    case 'm' :
    cout << "Individual is married\n"; break;

    case 'D' :
    cout << "Individual is divorced\n"; break;

    case 'd' :
    cout << "Individual is divorced\n"; break;

    case 'W' :
    cout << "Individual is widowed\n"; break;

    case 'w' :
    cout << "Individual is widowed\n"; break;

    default : cout << "An invalid code was entered\n";
    }
    
    return 0;
}
