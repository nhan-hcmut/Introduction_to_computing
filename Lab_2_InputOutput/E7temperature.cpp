#include<iostream>
using namespace std;

int main() {

    float fahrenheit = 0, celsius = 0;

    cout << "Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit-32) / 1.8;

    cout << "Celsius: " << celsius << endl;

    return 0;
}
