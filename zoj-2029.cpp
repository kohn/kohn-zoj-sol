#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#include <string.h>
#define E exp(1.0f)
#define PRE 0.0000001
using namespace std;
int Search(vector<int>A,int from,int to,int sea)
{
	int t=(to+from)/2;
	if(to-from<10)
	{
		for(int i=from;i<to;i++)
			if(sea>=A[i] && sea<A[i+1])
				return i;
		return -1;
	}
	if(A[t]<=sea && sea<A[t+1])
		return t;
	if(A[t+1]<=sea)
		return Search(A,t+1,to,sea);
	else
		return Search(A,from,t,sea);
}
int main()
{
	vector<int>A;
	int n,m;
	while(cin>>n>>m)
	{
		int t;
		A.clear();
		for(int i=0;i<n;i++)
		{
			cin>>t;
			A.push_back(t);
		}
		sort(A.begin(),A.end());
		for(int i=0;i<m;i++)
		{
			cin>>t;
			if(t>=A[n-1] || t<A[0])
			{
				cout<<"no such interval"<<endl;
				continue;
			}
			t=Search(A,0,n,t);
			cout<<"["<<A[t]<<","<<A[t+1]<<")"<<endl;
		}
		cout<<endl;
	}
	return 0;
}