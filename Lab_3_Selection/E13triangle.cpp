#include<iostream>
using namespace std;

int main() {

    float edge1, edge2, edge3;

    cout << "First edge: ";
    cin >> edge1;

    cout << "Second edge: ";
    cin >> edge2;

    cout << "Third edge: ";
    cin >> edge3;
    
    if (edge1 == edge2 && edge2 == edge3) {
        cout << "Equilateral";
    }
    else if (edge1 == edge2 || edge2 == edge3 || edge3 == edge1) {
        cout << "Isosceles";
    }
    else if (edge1 != edge2 && edge2 != edge3 && edge3 != edge1) {
        cout << "Scalene";
    }
    return 0;
}