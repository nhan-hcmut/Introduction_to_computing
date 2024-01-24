#include<iostream>
using namespace std;

int main() {

    float edge1 = 0, edge2 = 0, edge3 = 0;

    cout << "The first edge: ";
    cin >> edge1;

    cout << "The second edge: ";
    cin >> edge2;

    cout << "The third edge: ";
    cin >> edge3;

    if ((edge1 >= edge2+edge3) || (edge2 >= edge1+edge3) || (edge3 >= edge1+edge2)) {
        cout << "Not a triangle.\n";
    }

    else if (edge1==edge2 && edge2==edge3) {
        cout << "Equilateral\n";
    }
    else if (edge1==edge2 || edge2==edge3 || edge3==edge1) {

        if ((edge1*edge1) == (edge2*edge2 + edge3*edge3) || (edge2*edge2) == (edge1*edge1 + edge3*edge3) || (edge3*edge3) == (edge1*edge1 + edge2*edge2)) cout << "Isosceles right-angled\n";

        else cout << "Isosceles\n";
    }

    else if ((edge1*edge1) == (edge2*edge2 + edge3*edge3) || (edge2*edge2) == (edge1*edge1 + edge3*edge3) || (edge3*edge3) == (edge1*edge1 + edge2*edge2)) cout << "Right-angled\n";

    else cout << "Scalene\n";
    
    return 0;
}
