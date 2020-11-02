//Program to print all even numbers between 1 to 100 using while loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=1;
    cout<<"All even numbers between 1 to 100 are:";

    while(n<=100)
    {
        if ((n%2)==0)
           cout<<n<<" ";
        n++;
    }
    return 0;
}
