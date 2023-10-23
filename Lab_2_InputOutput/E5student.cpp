#include<iostream>
#include<string>

using namespace std;

int main () {

    string name, sex;
    int age, height, weight;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    cout << "Sex: ";
    cin >> sex;

    cout << "Height (centimeter): ";
    cin >> height;

    cout << "Weight (Kilogram): ";
    cin >> weight;

    cout << "\nName\t" << "Sex\t" << "Height\t" << "Weight\n";
    cout << name << "\t" << sex << "\t" << height << "\t" << weight;
    
    return 0;
}
