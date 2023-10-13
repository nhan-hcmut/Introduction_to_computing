#include<iostream>
using namespace std;

int main() {

    float first_num, second_num, third_num, min;

    cout << "The first number: ";
    cin >> first_num;

    cout << "The second number: ";
    cin >> second_num;

    cout << "The third number: ";
    cin >> third_num;

    if (first_num < second_num) min = first_num;
    else min = second_num;

    if (third_num < min) min = third_num;
    
    cout << "The smallest number: " << min;

    return 0;
}