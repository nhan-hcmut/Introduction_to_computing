#include<iostream>
using namespace std;

int main() {

    int a,b,m;

    cout<<"Nhap so thu nhat: "; cin>>a;
    cout<<"Nhap so thu hai: "; cin>>b;

    if (a>b) m=a;
    else m=b;

    cout<<"So lon hon la "<<m;

    return 0;
}