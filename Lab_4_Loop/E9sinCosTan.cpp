#include<iostream>
#include<math.h>
using namespace std;

int main() {
    const double PI = 3.14159265359;

    long long x = 0; // Degree of angles

    for (x=5; x<=85; x+=5) {
        
        cout << "Sin(" << x <<") = " << sin(x*PI/180) << " ; cos ("<< x << ") = " << cos(x*PI/180) << " ; tan (" << x << ") = " << tan(x*PI/180) << endl << endl;
    }
    return 0;
}
