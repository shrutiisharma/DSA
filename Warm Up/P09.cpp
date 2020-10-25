//Program to print sum of n natural numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i=1;
    int sum=0;

    cout<<"Enter a positive integer:";
    cin>>n;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }

    cout<<sum;
    return 0;
}