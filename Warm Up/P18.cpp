//Fibonacci series upto n terms using loop.
//0,1,1,2,3,5,8,13...

#include <bits/stdc++.h>
using namespace std;

int fib(int);
int main()
{
    cout<<fib(6);
    return 0;
}
int fib(int n)
{
    unsigned int result;
    int t1=0, t2=1;
    cout<<t1<<" "<<t2<<" ";
    for (int i = 1; i < n-1; i++)
    {
        result = t1 + t2;
        t1= t2;
        t2= result;
        cout<<result<<" ";
    }
    cout<<endl;
    return result;
}
