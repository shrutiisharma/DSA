#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[20];
  int n,i;

  cout<<"Enter the value of n:";
  cin>>n;

  cout<<"Enter values for array:";
  for(i=0;i<n;i++)
    cin>>a[i];

   cout<<"Before Sorting: ";
   for(i=0;i<n;i++)
     cout<<a[i]<<" ";

   //logic of bubble sort
   for(int p=0;p<n;p++)
   {
     for (int j=0;j<n-p-1;j++)
       {
           if(a[j]>a[j+1])
           {
               int temp=0;
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }

   cout<<"\nAfter sorting: ";
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
   
return 0;
}
