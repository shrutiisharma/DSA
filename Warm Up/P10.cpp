//Program to print all natural numbers in reverse (from n to 1) using while loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
        cout<<n<<" ";
        n--;
    }
    return 0;
}
