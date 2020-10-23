//Program to check whether a number is even or odd using switch case.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number you want to check:";
    cin>>number;

    switch ((number % 2)==0)
    {
        case 0:
            cout<<number<<" is odd";
            break;

        case 1:
            cout<<number<<" is even";
            break;
    }
    return 0;
}
