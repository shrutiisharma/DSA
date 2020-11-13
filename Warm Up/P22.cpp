//Program to find first and last digit of a number.

#include <bits/stdc++.h>
using namespace std;

int firstDigit(int x);
int lastDigit(int y);
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"First digit of the number: "<<firstDigit(n)<<endl;
    cout<<"Last digit of the number: "<<lastDigit(n);
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

