#include<iostream>
using namespace std;

int main() {

    float fahrenheit = 0, celsius = 0;
    int selection = 0;

    cout << "Press 1 to convert Fahrenheit to Celsius.\n"
    << "Press 2 to convert Celsius to Fahrenheit.\n"
    << "Press any other numbers to quit.\n"
    << "Enter a number: ";

    cin >> selection;

    switch (selection) {

        case 1 :

            cout << "Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (5.0/9) * (fahrenheit-32);
            cout << celsius << " degrees Celsius.\n";
            break;
        
        case 2 :

            cout << "Celsius: ";
            cin >> celsius;
            fahrenheit = (9.0/5) * celsius + 32;
            cout << fahrenheit << " degrees Fahrenheit.\n";
            break;
        
        default :
            cout << "Exit\n";
    }
    return 0;
}
