#include<iostream>
using namespace std;

int main() {

    int n, i = 1;
    double sum = 0, num, average;

    cout << "How many numbers: ";
    cin >> n;

    while (i <= n) {

        cout << "Number " << i << ": ";
        cin >> num;

        sum += num;
        i++;
    }

    average = sum / n;

    cout << "Average: " << average;

    return 0;
}