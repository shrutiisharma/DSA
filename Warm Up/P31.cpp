//Trailing zeroes in a factorial
//Time Complexity: n --> inefficient

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    int f = 1;
    for (int i = 2; i <= n; i++)
        f = f * i;
    
    int count = 0;
    while(f % 10 == 0)
    {
        count++;
        f = f / 10;
    }
    cout << count;
    return 0;
}
