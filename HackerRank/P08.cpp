//Arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    int a[10000];

    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];

    while(i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}