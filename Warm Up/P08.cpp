//Program to print all natural numbers from 1 to n using while loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i=1;

    cout<<"Enter a positive integer:";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<"\t";
        i++;
    }

    return 0;
}
