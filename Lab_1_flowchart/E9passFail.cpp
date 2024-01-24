#include<iostream>
using namespace std;

int main() {

    float average = 0, grade = 0;
    int i = 1;

    while (i <= 4) {

        cout << "Grade " << i << ": ";
        cin >> grade;

        average += grade / 4.0;
        i++;
    }

    if (average >= 60) cout << "Pass\n";

    else cout << "Fail\n";

    return 0;
}
