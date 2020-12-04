//Middle of Three 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int middle(int A, int B, int C)
    {
        if ((A > B && B > C) || (C > B && B > A))    return B;
        else if ((B > A && A > C) || (C > A && A > B))    return A;
        else if ((A > C && C > B) || (B > C && C > A))    return C;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int A, B, C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A, B, C)<<"\n";
    }
    return 0;
}
