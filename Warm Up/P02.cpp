// Program to print total number of days in a month using switch case.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberForMonth;

    cout<<"1 for January\n"<<"2 for February\n"<<"3 for March\n"<<"4 for April\n"<<"5 for May\n"<<"6 for June\n"<<"7 For July\n"<<"8 for August\n"<<"9 for September\n"<<"10 for October\n"<<"11 for November\n"<<"12 for December\n"<<"Enter your choice:";
    cin>>numberForMonth;

    switch(numberForMonth)
    {
        case 1:
            cout<<"January"<<endl<<"Days - 31";
            break;

        case 2:
            cout<<"February"<<endl<<"Days : 28 or 29(leap year)";
            break;

        case 3:
            cout<<"March"<<endl<<"Days : 31";
            break;

        case 4:
            cout<<"April"<<endl<<"Days : 30";
            break;

        case 5:
            cout<<"May"<<endl<<"Days : 31";
            break;

        case 6:
            cout<<"June"<<endl<<"Days : 30";
            break;

        case 7:
            cout<<"July"<<endl<<"Days : 31";
            break;

        case 8:
            cout<<"August"<<endl<<"Days : 31";
            break;

        case 9:
            cout<<"September"<<endl<<"Days : 30";
            break;

        case 10:
            cout<<"October"<<endl<<"Days : 31";
            break;

        case 11:
            cout<<"November"<<endl<<"Days : 30";
            break;

        case 12:
            cout<<"December"<<endl<<"Days : 31";
            break;

        default:
            cout<<"Invalid Choice!";

    }
    return 0;

}
