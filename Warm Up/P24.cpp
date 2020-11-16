//Program to swap first and last digit of a number.

#include <bits/stdc++.h>
using namespace std;

int firstDigit(int x);
int lastDigit(int y);
int main()
{
    int n, temp, a, b;
    cout<<"Enter the number:";
    cin>>n;
    temp = n;
    a=firstDigit(n);
    b=lastDigit(n);
    int c = 0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    int result = b * (pow(10,c-1)) + a + ((temp/10)-(a * (pow(10,c-2))))*10;
    cout<<result;
    
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

