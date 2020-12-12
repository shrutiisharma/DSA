//Trailing zeroes in a factorial
//Time Complexity: log(n)  --> efficient

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for(int i = 5; i <= n; i = i * 5)
            count = count + (n / i);
        cout << count <<endl;
    }
    return 0;
}
