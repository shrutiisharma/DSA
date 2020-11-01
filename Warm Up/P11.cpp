//Program to print the alphabet using while loop.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch='a';
    cout<<"The Alphabet:" <<endl;

    while(ch<='z')
    {
        cout<<ch<<" ";
        ch++;
    }
}