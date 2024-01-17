#include<iostream>
using namespace std;

int main() {

    int n = 0;

    float num = 0, sum = 0, average = 0;

    cout << "How many real numbers: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Enter the " << i+1 << " number: ";
        cin >> num;

        sum += num;
    }

    average = sum / n;

    cout << "The average value: " << average << endl;

    return 0;
}
