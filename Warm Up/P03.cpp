//Program to check whether a character is vowel or consonant using switch case.

#include <bits/stdc++.h>
using namespace std;

int main() {
    char character;
    cout<<"Enter the character letter to check: ";
    cin>>character;

    switch(character)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
            cout<<character<<" is a vowel.";
            break;

        default:
            cout<<character<<" is a consonant.";
            break;
    }
    return 0;
}
