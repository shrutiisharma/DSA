//Variable Sized Arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x, y, s = 0;
    cin>>x>>y;
    int* arr[x];
    while (x--)
    {
        int n;
        cin>>n;
        
        arr[s] = (int*)malloc(n * sizeof(int));
        
        for (int i = 0; i < n; i++)
        cin>>arr[s][i];
        s++;
    }
    while (y--)
    {
        int a, b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
