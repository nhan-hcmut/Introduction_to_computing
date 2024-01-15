/*
Requirement: Ask users where they are from, then greet them with "Hello" in their language.
<br>
Constraint: Use if-else statements. Do not use switch-case.
<br>
Example:
Where are you from?
F
Bonjour
*/

#include<iostream>
using namespace std;

bool isValidInput(char); // Check if the input is valid or not.

int main() {

    char country = '\0';

    cout << "Where are you from? (Enter a character to answer)\n"
    << "A: America, B: Britain, C: China, F: France, G: Germany, I: Italia, J: Japan, K: Korea, S: Spain, V: Vietnam\n"
    << "Or press q to quit\n";
    
    cin >> country;
    
    while (!isValidInput(country)) { // If the input is invalid, tell users to answer again.
        if (country == 'q') { // But if the input is character 'q', exit this program.
            cout << "Exit program.\n";
            return 0;
        }

        cout << "Invalid input. Please follow instructions above and type again or press q to quit.\n";
        cin >> country;
    }

    if (country == 'A' || country == 'a')
        cout<<"Hello\n";
    
    else if (country == 'B' || country == 'b') // I want to be clear so I put another "Hello" for British in a separate line.
        cout<<"Hello\n";
    
    else if (country == 'C' || country == 'c')
        cout<<"Ni hao\n";
    
    else if (country == 'F' || country == 'f')
        cout<<"Bonjour\n";
    
    else if (country == 'G' || country == 'g')
        cout<<"Hallo\n";
    
    else if (country == 'I' || country == 'i')
        cout<<"Ciao\n";
    
    else if (country == 'J' || country == 'j')
        cout<<"Konnichiwa\n";
    
    else if (country == 'K' || country == 'k')
        cout<<"Annyeong haseyo\n";
    
    else if (country == 'S' || country == 's')
        cout<<"Hola\n";
    
    else if (country == 'V' || country == 'v')
        cout<<"Xin chao\n";
    
    else cout << "Something was wrong.\n"; // I put this line of code here just in case something is wrong.

    return 0;
}

bool isValidInput(char ch) {
    
    if (ch=='A' || ch=='a' || ch=='B' || ch=='b' || ch=='C' || ch=='c' || ch=='F' || ch=='f' || ch=='G' || ch=='g' || ch=='I' || ch=='i' || ch=='J' || ch=='j' || ch=='K' || ch=='k' || ch=='S' || ch=='s' || ch=='V' || ch=='v')
        return true;
    else
        return false;
}
