//GCD or HCF of given numbers
//Euclidean Algorithm

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
