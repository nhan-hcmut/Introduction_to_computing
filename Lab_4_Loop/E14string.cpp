#include<iostream>
#include<cstring>
using namespace std;

int main () {
    
    char first_string[20], second_string[20], third_string[20];
    
    cout << "The first string: ";
    cin >> first_string;

    cout << "The second string: ";
    cin >> second_string;

    cout << "The third string: ";
    cin >> third_string;

    cout << "-------------\n";

    if (strcmp(first_string, second_string)<0 && strcmp(first_string, third_string)<0) {
        cout << first_string << endl;
        
        if (strcmp(second_string, third_string)<0) {
            cout << second_string << endl;
            cout << third_string;
        }
        else {
            cout << third_string << endl;
            cout << second_string;
        }
    }

    else if (strcmp(second_string, first_string)<0 && strcmp(second_string, third_string)<0) {
        cout << second_string << endl;
        
        if (strcmp(first_string, third_string)<0) {
            cout << first_string << endl;
            cout << third_string;
        }
        else {
            cout << third_string << endl;
            cout << first_string;
        }
    }
    else {
        cout << third_string << endl;
        
        if (strcmp(first_string, second_string)<0) {
            cout << first_string << endl;
            cout << second_string;
        }
        else {
            cout << second_string << endl;
            cout << first_string;
        }
    }

    return 0;
}