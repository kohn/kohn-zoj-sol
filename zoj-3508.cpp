#include <iostream> 
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
class compare
{
public:
    bool operator()(pair<int,int> a,pair<int,int> b)
	{
	    if(a.first!=b.first)
		return a.first>b.first;
	    else
		return a.second>b.second;
	}
};
int main()
{
    int n,m;
    compare comp;
    while(cin>>n>>m)
    {
	int count=0;
	vector< pair<int,int> >soldier;
	vector<int> weight;
	for(int i=0;i<n;i++)
	{
	    int min,max;
	    cin>>min>>max;
	    soldier.push_back(make_pair(min,max));
	}
	for(int i=0;i<m;i++)
	{
	    int t;
	    cin>>t;
	    weight.push_back(t);
	}
	sort(soldier.begin(),soldier.end(),comp);
	sort(weight.begin(),weight.end(),greater<int>());
	for(int i=0;i<n;i++)
	    for(vector<int>::iterator iter=weight.begin();iter!=weight.end();iter++)
	    {
		if((*iter)<=soldier[i].second)
		{
		    if( (*iter)>=soldier[i].first)
		    {
			weight.erase(iter);
			count++;
			break;
		    }
		    else
			break;
		}
	    }
	cout<<count<<endl;
    }
    return 0;

}
