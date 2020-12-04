//Kth smallest element

#include <bits/stdc++.h>
using namespace std;

//arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int n, int r, int k) 
{
    sort(arr, arr + (r + 1));
    return arr[k - 1];
}
int main()
{
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int t;
    cin>>t;                        //testcases
    while(t--)
    {
        int num;                     
        cin >> num;                   //size of array
        int arr[num];
        for (int i = 0; i < num; i++)
        cin >> arr[i];
        int k;
        cin>>k;
        cout<<kthSmallest(arr, 0, num - 1, k)<<endl;
    }
    return 0;
}