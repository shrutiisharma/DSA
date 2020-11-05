//Program to find sum of all odd numbers between 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    int sum=0;

    cout<<"Enter n:";
    cin>>n;

    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"Sum of all even numbers between 1 to n is: "<<sum;

    return 0;
}
