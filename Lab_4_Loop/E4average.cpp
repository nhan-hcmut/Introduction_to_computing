#include<iostream>
using namespace std;

int main() {

    int n;

    float num, sum = 0, average;

    cout << "How many real numbers: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Enter the " << i+1 << " number: ";
        cin >> num;

        sum += num;
    }

    average = sum / n;

    cout << "The average value: " << average;

    return 0;
}