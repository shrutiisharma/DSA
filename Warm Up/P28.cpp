//Program to check whether a number is palindrome or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, original, reverse;
    cout<<"Enter a number: ";
    cin>>n;
    original=n;
    while(n!=0)
    {
        reverse = (reverse*10) + (n%10);
        n=n/10;
    }
    if(original==reverse)
    cout<<"The number is palindrome.";
    else
    cout<<"The number is not palindrome";
    return 0;
}
