#include<iostream>
using namespace std;

int main() {

    int num = 0;
    float average = 0;

    // This program uses ONLY 2 variables => no loop

    cout << "Number 1: ";
    cin >> num;
    average = float(num)/5;

    cout << "Number 2: ";
    cin >> num;
    average += float(num)/5;

    cout << "Number 3: ";
    cin >> num;
    average += float(num)/5;

    cout << "Number 4: ";
    cin >> num;
    average += float(num)/5;

    cout << "Number 5: ";
    cin >> num;
    average += float(num)/5;

    cout << "Average: " << average << endl;
    
    return 0;
}
