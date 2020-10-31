//Reverse the Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    int a[10000];

    cin>>n;           //number of inputs to be taken
    for(i=0;i<n;i++)
        cin>>a[i];

    while(i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}