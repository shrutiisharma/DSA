//Program to print all odd numbers between 1 to 100 using while loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=1;
    cout<<"All odd numbers between 1 to 100 are:\n";

    while(n<=100)
    {
        if ((n%2)!=0)
            cout<<n<<" ";
        n++;
    }
    return 0;
}
