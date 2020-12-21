//Seive Of Eratosthenes
//Print all prime numbers till n
//Time Complexity: nlog(log(n)) -->approx linear

#include <bits/stdc++.h>
using namespace std;

void seive(int n)
{
    vector <bool> isPrime(n + 1, true);
    for(int i = 2; i <= n; i++)
    {
        if(isPrime.at(i))
        {
            cout << i << " ";
            for(int j = i*i; j <= n; j = j + i)
                isPrime[j] = false;
        }
    }
    return ;   
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    seive(n);
    return 0;
}
