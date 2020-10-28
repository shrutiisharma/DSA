#include <bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int m); 
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

    Bubble_sort (a,n);

    cout<<"\nAfter sorting: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}

void Bubble_sort(int arr[], int m)
{
     for(int p=0;p<m;p++)
   {

       for (int j=0;j<m-p-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int temp=0;
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }
}

