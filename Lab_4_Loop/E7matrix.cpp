#include<iostream>
using namespace std;

int main() {

    int n=0; // Order n of the matrix (from 01 to 10)

    while (n<1 || 10<n) {
        cout << "Order of the matrix (from 01 to 10): ";
        cin >> n;
    }

    int original_matrix[10][10];
    int transposed_matrix[10][10];

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            cout << "Row " << i+1 << ", column " << j+1 << ": ";

            cin >> original_matrix[i][j];
            
            transposed_matrix[j][i] = original_matrix[i][j];
        }
        cout << "\n-------------\n";
    }
    
    cout << "Transposed matrix:\n";

    for (int i=0; i<n; i++) {
        
        for (int j=0; j<n; j++) {

            cout << transposed_matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}