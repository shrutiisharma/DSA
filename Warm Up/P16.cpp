//Program to print multiplication table of any number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

    cout<<"Enter the number you want the multiplication table of:";
    cin>>n;

    for(i=0;i<=20;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}