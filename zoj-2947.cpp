#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
string sh(string a[],int n)
{
	string temp="";
	for(int i=0;i<n;i++)
		temp=temp+a[i][0];
	return temp;
}
int main()
{
	string a[10];
	string b[10];
	string abbr1,abbr2;
	int repeat;
	cin>>repeat;
	while(repeat--)
	{
		int n1,n2;
		cin>>n1;
		for(int i=0;i<n1;i++)
			cin>>a[i];
		abbr1=sh(a,n1);
		cin>>n2;
		for(int i=0;i<n2;i++)
			cin>>b[i];
		abbr2=sh(b,n2);
		if(abbr1==abbr2)
			cout<<"SAME"<<endl;
		else
			cout<<"DIFFERENT"<<endl;
	}
}