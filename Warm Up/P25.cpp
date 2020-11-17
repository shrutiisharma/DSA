//Program to calculate sum of digits of a number.

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int x);
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Sum is "<<sumOfDigits(n);
    return 0;
}
int sumOfDigits(int x)
{
    int sum=0, y;
    while(x!=0)
    {
        y = x % 10;
        sum += y;
        x=x/10;
    }
    return sum;
}
