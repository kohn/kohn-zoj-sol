#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;
string Add(string sum,string s)
{
    string temp="";
    int indexsum=sum.length()-4;
    int indexs=s.length()-4;
    if(indexsum<indexs)
	return Add(s,sum);
    int carry=0;
    for(int i=1;i<=2;i++)
    {
	int x=sum[sum.length()-i]-'0' +s[s.length()-i]-'0'+carry;
	temp.insert(temp.begin(),x%10+'0');
	carry=x/10;
    }
    temp.insert(temp.begin(),'.');
    for(int i=indexs;i>=0;i--)
    {
	int x=sum[i+indexsum-indexs]-'0' +s[i]-'0'+carry;
	temp.insert(temp.begin(),x%10+'0');
	carry=x/10;
    }
    for(int i=indexsum-indexs-1;i>=0;i--)
    {
	int x=sum[i]-'0'+carry;
	temp.insert(temp.begin(),x%10+'0');
	carry=x/10;
    }
    if(carry==1)
	temp.insert(temp.begin(),carry+'0');
    return temp;
}
int  main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
	string res="0.00";
	for(int i=0;i<n;i++)
	{
	    string str;
	    cin>>str;
	    str.erase(str.begin());
	    for(string::iterator iter=str.begin();iter!=str.end();iter++)
		if((*iter)==',')
		    str.erase(iter);
	    res=Add(res,str);
	}
	int length=res.length();
	for(int i=length-4;i>=1;i--)
	    if((i-length)%3==0)
		res.insert(res.begin()+i,',');
	cout<<"$"<<res<<endl;
	cin>>n;
    }
    return 0;
}
