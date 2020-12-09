//Factorial of a number

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n==0) return 1;
    return factorial(n-1) * n;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
