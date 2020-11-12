//Program to count number of digits in a number.

#include <bits/stdc++.h>
using namespace std;

int digits(long long x);
int main()
{
    long long n;
    cout<<"Enter the number:";
    cin>>n;
    cout<< digits(n);
    return 0;
}
int digits(long long x)
{
    int count = 0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    return count;
}
