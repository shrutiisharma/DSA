//Print all prime factors of a number
//EFFICIENT
//Time Complexity: O(sqrt(n))                 [sqrt(n)/6]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    if (n == 1) 
    {
        cout << "1 is a unique number" << endl;
        return 0;
    }
    for(int i=2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1) cout << n;
    return 0;
}
    
    

