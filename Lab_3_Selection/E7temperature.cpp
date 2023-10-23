#include<iostream>
using namespace std;

int main() {

    float fahrenheit, celsius;
    int selection;

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
            cout << celsius << " degrees Celsius.";
            break;
        
        case 2 :

            cout << "Celsius: ";
            cin >> celsius;
            fahrenheit = (9.0/5) * celsius + 32;
            cout << fahrenheit << " degrees Fahrenheit.";
            break;
        
        default :
            cout << "Exit";
    }
    return 0;
}