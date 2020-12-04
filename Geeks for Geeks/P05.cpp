//Maximum Index Difference
//Time Complexity = O(n^2)

#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n) 
{ 
    int maxDiff = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
        {
            if (arr[i] <= arr[j] && maxDiff < (j - i))  maxDiff = j - i;
        }
    }
    return maxDiff;
}
int main()
{
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int T;
    cin >> T;            //testcases
    while(T--)
    {
        int num;                     
        cin >> num;                   //size of array
        int arr[num];
        for (int i = 0; i < num; i++)
        cin >> arr[i];
        if(num == 1)
        {
            cout << 0 << endl;
            continue;
        }
        cout << maxIndexDiff(arr, num) << endl;
    }
    return 0;
}
