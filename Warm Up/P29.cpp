//Program to find frequency of each digit in a given integer.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, temp, i, y, count;
    cout<<"Enter the number:";
    cin>>number;
    temp=number;
    for(i=0;i<10;i++)
    {   
        number=temp;
        count=0;
        while(number)
        {
            y=number%10;
            if(y==i) count++;
            number=number/10;
        }
        cout<<i<<" occurs "<<count<<" times "<<endl;
    }
    return 0;
}
