//Program to check whether a number is positive, negative or zero using switch case.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number you want to verify:";
    cin>>number;

    switch(number>0)
    {
        case 1:
            cout << number << " is positive";
            break;

        case 0:
            switch (number < 0)
            {
                case 1:
                    cout << number << " is negative";
                    break;
                case 0:
                    cout << number << " is zero";
                    break;
            }
            break;

    }
    return 0;
}
