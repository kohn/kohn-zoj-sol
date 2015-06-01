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
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {

	vector<int> v;
    	for(int i=0;i<n;i++)
	{
	    int t;
	    cin>>t;
	    int j;
	    for(j=0;j<v.size();j++)
		if(v[j]==t)
		    break;
	    if(j==v.size())
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
	    if(i!=0)
		cout<<" ";
	    cout<<v[i];
	}
	cout<<endl;
	cin>>n;
    }
    return 0;
}
