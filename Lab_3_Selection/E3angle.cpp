#include<iostream>
using namespace std;

int main() {

    int degree = 0;

    cout << "Enter an angle (expressed in degrees): ";
    cin >> degree;

    if (0<=degree && degree<90) {
        cout << "First quadrant\n";
    }
    else if (90<=degree && degree<180) {
        cout<<"Second quadrant\n";
    }
    else if (180<=degree && degree<270) {
        cout<<"Third quadrant\n";
    }
    else if (270<=degree && degree<360) {
        cout<<"Fourth quadrant\n";
    }
    else {
        cout << "Please run this program again and enter another number.\n";
    }

    return 0;
}
