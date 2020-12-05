//Sort an array of 0s, 1s and 2s

#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    sort(a, a+n);
}
  
// Driver Code 
int main() 
{ 
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int t;
    cin>>t;                        //testcases
    while(t--)
    {
        int n;                     
        cin >> n;                   //size of array
        int arr[n];
        for (int i = 0; i < n; i++)
        cin >> arr[i]; 

        sort012(arr, n); 

        for (int i = 0; i < n; i++)       //sorted array
            cout << arr[i] << " ";
        cout<<endl;
    } 
    return 0; 
} 