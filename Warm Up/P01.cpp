// Program to print weekdays' name using switch case.

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the day's number you want to print:";
  cin>>n;
  switch(n)
  {
      case 1:
          cout<<"Monday";
          break;

      case 2:
          cout<<"Tuesday";
          break;

      case 3:
          cout<<"Wednesday";
          break;

      case 4:
          cout<<"Thursday";
          break;

      case 5:
          cout<<"Friday";
          break;

      case 6:
          cout<<"Saturday";
          break;

      case 7:
          cout<<"Sunday";
          break;

      default:
          cout<<"Invalid number";
          break;
  }
  return 0;
}
