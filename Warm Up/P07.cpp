//Program to create Simple Calculator using switch case.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n1, n2;
    char operation;

    cout<<"Following are the operations you can perform on your Simple Calculator:\n Addition(+) ; Subtraction(-) ; Multiplication(*) ; Division(/)"<< endl;

    cout<<"Enter number1:";
    cin>>n1;

    cout<<"Enter the operator:";
    cin>>operation;

    cout<<"Enter number2:";
    cin>>n2;

    switch(operation)
    {
        case '+':
            cout<<n1<<"+"<<n2<<"="<<n1+n2;
            break;

        case '-':
            cout<<n1<<"-"<<n2<<"="<<n1-n2;
            break;

        case '*':
            cout<<n1<<"*"<<n2<<"="<<n1*n2;
            break;

        case '/':
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
            break;

        default:
            cout<<"Invalid Operation.";
            break;

    }

    return 0;
}
