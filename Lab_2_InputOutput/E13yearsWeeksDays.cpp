#include<iostream>
using namespace std;

int main() {

    int num, year, week, day;

    cout << "Enter number of days: ";
    cin >> num;

    year = num/365;
    week = (num - year*365) / 7;
    day = num - (year*365) - (week*7);

    cout << num << " days = " << year << " years + " << week << " weeks + " << day << " days.";
    
    return 0;
}
