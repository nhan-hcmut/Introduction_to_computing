#include<iostream>
#include<math.h>

using namespace std;

int main() {
    
    float a, b, c, delta, root1, root2;

    cout << "Solving ax^2 + bx + c = 0, assume that the equation has 2 real distinct solutions (delta>0)\n";

    cout << "Enter 3 parameters a, b, c\n";

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    delta = (b*b) - (4*a*c);
    
    root1 = (-b+sqrt(delta)) / (2*a);
    root2 = (-b-sqrt(delta)) / (2*a);

    cout << "The first root: " << root1 << endl
    << "The second root: " << root2;
    
    return 0;
}
