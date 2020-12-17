//Print all prime factors of a number
//MOST EFFICIENT
//Time Complexity: O(sqrt(n))                 [sqrt(n)/6]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, i;
    cin >> n;
    if (n == 1) 
    {
        cout << "1 is a unique number" << endl;
        return 0;
    }
    while(n % 2 == 0) 
    {
        cout << 2 << " ";
        n = n / 2;
    } 
    while(n % 3 == 0) 
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for(int i = 5; i <= sqrt(n); i = i + 6)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while(n % (i+2) == 0)
        {
            cout << i+2 << " ";
            n = n / (i+2);
        }
    }
    if (n > 3) cout << n;
    return 0;
}
    
    

