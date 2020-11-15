//Program to find sum of first and last digit of a number.

#include <bits/stdc++.h>
using namespace std;

int firstDigit(int x);
int lastDigit(int y);
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Sum of first and last digit of the number: "<<firstDigit(n) + lastDigit(n);
    return 0;
}

int firstDigit(int x)
{
    while(x>10)
        x=x/10;
    return x;
}
int lastDigit(int y)
{
    return (y%10);
}

