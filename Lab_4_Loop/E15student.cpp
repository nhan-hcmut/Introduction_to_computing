#include<iostream>
using namespace std;

const int MAX = 100;

struct student {
    
    char name[20];
    long int rollno;
    char sex[10];
    float height, weight;
};

int main () {

    student cls[MAX];
    
    int n;

    cout << "How many names?\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "Record " << i+1 << endl;

        cout << "Name: ";
        cin >> cls[i].name;

        cout << "Roll number: ";
        cin >> cls[i].rollno;

        cout << "Sex: ";
        cin >> cls[i].sex;

        cout << "Height: ";
        cin >> cls[i].height;

        cout << "Weight: ";
        cin >> cls[i].weight;

        cout << endl;
    }

    /* Task a */

    cout << "Name\t" << "Rollno\t" << "Sex\t" << "Height\t" << "Weight\n";

    for (int i=0 ; i<n ; i++) {

        cout << cls[i].name << "\t" << cls[i].rollno << "\t" << cls[i].sex << "\t" << cls[i].height << "\t" << cls[i].weight << "\n";
    }

    /* Task b */

    float sum_of_heights = 0, sum_of_weights = 0, average_height, average_weight;

    for (int i=0; i<n; i++) {

        sum_of_heights += cls[i].height;
        sum_of_weights += cls[i].weight;
    }

    average_height = sum_of_heights / n ;
    average_weight = sum_of_weights / n;

    cout << "Average height: " << average_height << endl;

    cout << "Average weight: " << average_weight;

    return 0;
}