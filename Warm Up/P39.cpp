//All Divisors of a Number(sorted)
//Time Complexity: O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, i;
    cin >> n;
    for (i = 1; i <= sqrt(n); i++)
        if(n % i == 0)      cout << i << " "; 
    for (i; i >= 1; i--)
        if(n % i == 0)      cout << n/i << " "; 
    return 0;
}
