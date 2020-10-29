#include <bits/stdc++.h>
using namespace std;

void Selection(int arr[], int m); 
int main()
{
    int a[10], n, i, j;
    
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<"Enter values for array:";
    for(i=0;i<n;i++)
      cin>>a[i];

    cout<<"Before Sorting: ";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";

    Selection (a,n);

    cout<<"\nAfter sorting: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}

void Selection (int arr[], int m)
{
    int min_index, j, p;
    for(p=0;p<m-1;p++)
    {
        min_index=p;

        for(j=p+1;j<m;j++)
            if(arr[min_index]>arr[j])
                  min_index=j;

        //swapping
        int temp=0;
        temp=arr[min_index];
        arr[min_index]=arr[p];
        arr[p]=temp;
    }
}
