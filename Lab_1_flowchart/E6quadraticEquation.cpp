#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float a = 0, b = 0, c = 0, delta = 0, root1 = 0, root2 = 0;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    delta = (b*b) - (4*a*c);

    if (a == 0) { // If a is zero, we have a linear equation.
        if (b == 0) {
            if (c == 0) cout << "Infinite solutions.\n";
            else cout << "No solution.\n";
        }
        else {
            if (c == 0) cout << "Root = 0\n"; // Remove the output "Root = -0"
            else cout << "Root = " << -c/b << endl;
        }
    }
    /* Start solving quadratic equation from here */
    else if (delta < 0) {
        cout << "There are no real roots.\n";
    }
    else if (delta == 0) {

        if ((-b / (2*a)) == 0) cout << "Root = 0\n"; // Remove the output "Root = -0"

        else cout << "Root = " << -b / (2*a) << endl;
    }
    else {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);

        cout << "The first root = " << root1 << endl
        << "The second root = " << root2 << endl;
    }

    return 0;
}
