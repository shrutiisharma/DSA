//Functions

#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c , int d )
{
    int max;
    max = (a > b && a > c && a > d) ?a :((b > c && b > d) ?b : (c > d ? c : d));
    return max;
}

int main()
{
    int n1, n2, n3, n4, ans;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    ans= max_of_four(n1,n2,n3,n4);
    cout<<ans;
    return 0;
}
