//Fibonacci series upto n terms using recursion.
//1,1,2,3,5,8,13...

#include <bits/stdc++.h>
using namespace std;

int fib(int);
int main()
{
    cout<<"5th term in the series is "<<fib(5);
    return 0;
}
int fib(int n)
{
     if (n==1 || n==2) return 1;
     return fib(n-1)+ fib(n-2);
}
