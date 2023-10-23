#include<iostream>
using namespace std;

int main() {

    float fahrenheit, celsius;

    cout << "Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit-32) / 1.8;

    cout << "Celsius: " << celsius;

    return 0;
}
