//Reverse the String

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		cout<< reverseWord(s) << endl;
	}
	return 0;
}
string reverseWord(string str)
{
    int i, j=0;
	string temp=str;
    for(i=str.length()-1;i>=0;i--)
		temp[j++]=str[i];	
	return temp;	
}
