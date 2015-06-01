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
int GCD(int a,int b)
{
    if(b>a)
	return GCD(b,a);
    if(a%b==0)
	return b;
    return GCD(b,a%b);
}
int LCM(int a,int b)
{
    int x=GCD(a,b);
    return a*b/x;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	    int t;
	    cin>>t;
	    v.push_back(t);
	}
	sort(v.begin(),v.end());
	int first=v[0];
	for(int i=1;i<v.size();i++)
	{
	    int second=v[i];
	    if(first%second!=0)
		first=LCM(first,second);
	}
	cout<<first<<endl;
    }
    return 0;
}
