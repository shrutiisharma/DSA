//Computing Power
//Time Complexity: O(log(n))
//Auxiliary Space: O(1)
//Efficient

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int number, exponent;
    cin >> number >> exponent;
    int result = 1;
    while(exponent > 0)
    {
        if(exponent % 2 != 0)
            result = result * number;
        number = number * number;
        exponent = exponent / 2;
    }
    cout << result;
    return 0;
}

