//Program to enter a number and print its reverse.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, reverse;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        reverse = (reverse*10) + (n%10);
        n=n/10;
    }
    cout<<"Reverse of the number is "<<reverse;
    return 0;
}
