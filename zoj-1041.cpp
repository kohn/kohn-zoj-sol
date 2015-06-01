//1041 gougou WA
#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#define PRE 0.000001
using namespace std;
vector< pair<int,int> >point;
vector< pair<int,int> >valid;
int x,y;
double r;
bool isContained(int i,int j)
{
//求叉积？是干嘛的？
    int k=(valid[i].first-x)*(valid[j].second-y) - (valid[i].second-y)*(valid[j].first-x);
    return k<=0;
}
double dist(int a,int b)
{
	return sqrt( pow(x-a,2) + pow(y-b,2) );
}
int fun(int n)
{
	valid.clear();
	for(int i=0;i<point.size();i++)
	    if(dist(point[i].first,point[i].second) <= r+PRE)
			valid.push_back(point[i]);

	int max=0;
	for(int i=0;i<valid.size();i++)  //扫描各个合法点
	{
	    int num=1;
	    for(int j=0;j<valid.size();j++)
	    {
		if(i==j)
		    continue;
		if(isContained(i,j))
		    num++;
	    }
	    if(num>max)  //若优于全局最优解，更新全局最优解
		max=num;
	}
	return max;
}
int main()
{
	cin>>x>>y>>r;
	while(r>0)
	{
		int n;
		cin>>n;
		point.clear();
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			point.push_back(make_pair(a,b));
		}
		cout<<fun(n)<<endl;
		cin>>x>>y>>r;
	}
	return 0;
}
