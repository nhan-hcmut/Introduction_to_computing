#include<iostream>
#include<math.h>
using namespace std;

int main() {

    float a, b, c, delta, root1, root2;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        cout << "There are no real roots.";
    }
    else if (delta == 0) {

        if ((-b / (2*a)) == 0) cout << "Root = 0"; // Remove the output "Root = -0"

        else cout << "Root = " << -b / (2*a);
    }
    else {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);

        cout << "The first root = " << root1 << endl
        << "The second root = " << root2;
    }

    return 0;
}
