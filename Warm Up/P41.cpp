//Computing Power
//Time Complexity: O(log(n))
//Auxiliary Space: O(log(n))
//Inefficient

#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if(p == 0) return 1;
    int temp = power(n, p/2);
    temp = temp * temp;
    if (p % 2 == 0)        return temp;
    if (p % 2 != 0)        return n * temp;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int number, exponent;
    cin >> number >> exponent;
    cout << power(number, exponent);
    return 0;
}
