#include<iostream>
using namespace std;

int main () {

    int i = 0;

    double hourly_rates[5] = {9.5 , 6.4 , 12.5 , 5.5 , 10.5}, working_hours[5] = {0 , 0 , 0 , 0 , 0}, wages[5] = {0 , 0 , 0 , 0 , 0};

    for (i=0; i<5; i++) {

        cout << "Working hour " << i+1 << ": ";
        cin >> working_hours[i];
        wages[i] = hourly_rates[i] * working_hours[i];
    }
    
    for (i=0; i<5; i++) {
        cout << i+1 << "\t" << "Hour rate = " << hourly_rates[i] << ", " << "working hour = " << working_hours[i] << ", wage = " << wages[i] << endl << endl;
    }
    return 0;
}
