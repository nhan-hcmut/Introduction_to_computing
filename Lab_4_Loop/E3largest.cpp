#include<iostream>
#include<limits>
using namespace std;

int main() {

    int n;
    float num;
    float largest = numeric_limits<float>::lowest(); // Assign the lowest possible value

    cout << "How many real numbers: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Enter the " << i+1 << " number: ";
        cin >> num;

        if (num > largest) {
            largest = num;
        }
    }

    cout << "The largest number: " << largest;

    return 0;
}
