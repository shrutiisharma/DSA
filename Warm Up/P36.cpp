//Print all prime factors of a number
//INEFFICIENT
//Time Complexity: O((n^2)log(n))

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n == 1)      return 0;
    if((n == 2) || (n == 3))  return 1;
    if((n % 2 == 0) || (n % 3 == 0))  return 0;
    
    for(int i = 5; i <= sqrt(n); i = i + 6)
    {
        if((n % i == 0) || (n % (i + 2) == 0))    return 0;
    }
    return 1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    if (isPrime(n) == 0)
    {
        for(int i=2; i < n; i++)
        {
            if(isPrime(i) == 1)
            {
                int x = i;
                while(n % x == 0)
                {
                    cout << i << endl;
                    x = x * i;
                }
            }
        }
    }
    else if (isPrime(n) == 1)   cout << n << " is a prime number. It's factors are: 1 and " << n << endl;
    if (n == 1) cout << "1 is a unique number" << endl;
    return 0;
}
