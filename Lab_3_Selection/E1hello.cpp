#include<iostream>
using namespace std;

int main() {

    char country;

    cout << "Where are you from?\n"
    << "A: America, C: China, F: France, G: Germany, I: Italia, J: Japan, K: Korea, S: Spain, V: Vietnam\n";
    
    cin >> country;

    if (country == 'V' || country == 'v')
        cout<<"Xin chao";

    else if (country == 'A' || country == 'a')
        cout<<"Hello";

    else if (country == 'F' || country == 'f')
        cout<<"Bonjour";

    else if (country == 'G' || country == 'g')
        cout<<"Hallo";

    else if (country == 'C' || country == 'c')
        cout<<"Ni hao";

    else if (country == 'J' || country == 'j')
        cout<<"Konnichiwa";

    else if (country == 'K' || country == 'k')
        cout<<"Annyeong haseyo";

    else if (country == 'I' || country == 'i')
        cout<<"Ciao";

    else if (country == 'S' || country == 's')
        cout<<"Hola";
    
    else cout << "Input error.";

    return 0;
}