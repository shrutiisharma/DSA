//Program to print the alphabet using ASCII value.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ascii_value;

    cout<<"To print the alphabet in UPPERCASE; type 65.\nTo print the alphabet in lowercase; type 97.\nASCII Value=";
    cin>>ascii_value;

    if(ascii_value==65)
    {
        cout<<"The Alphabet:";
        while(ascii_value<91)
        {
            printf("%c ",ascii_value);
            ascii_value++;
        }
    }
    if(ascii_value==97)
    {
        cout<<"The Alphabet:";
        while(ascii_value<=122)
        {
            cout << (char)ascii_value << " ";
            ascii_value++;
        }
    }
    return 0;
}