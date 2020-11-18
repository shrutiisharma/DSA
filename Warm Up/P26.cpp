//Program to calculate product of digits of a number.

#include <bits/stdc++.h>
using namespace std;

int productOfDigits(int x);
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Product is "<<productOfDigits(n);
    return 0;
}
int productOfDigits(int x)
{
    int product=1, y;
    while(x!=0)
    {
        y = x % 10;
        product *= y;
        x=x/10;
    }
    return product;
}
