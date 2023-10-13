#include<iostream>
using namespace std;

int main() {

    int first_num, second_num, more;

    cout << "Enter the first number: ";
    cin >> first_num;
    
    cout << "Enter the second number: ";
    cin >> second_num;

    if (first_num > second_num) {
        more = first_num;
    }
    else {
        more = second_num;
    }

    cout << "The larger number is " << more;

    return 0;
}
