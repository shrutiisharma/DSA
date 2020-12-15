//LCM of 2 numbers
//Time Complexity: log(min(a,b))-->which is the time complexity of Euclidean Algorithm
//Formula : a * b = LCM * HCF

#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(b == 0) return a;
    return GCD(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int a, b;
    cin >> a >> b;
    cout << LCM(a, b);
    return 0;
}


