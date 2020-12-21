//Move all negative numbers to beginning and positive to the end, with constant extra space

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            if(i != j)  swap(a[i], a[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    
    return 0;
}
