#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
	vector<int> v;
	int count[125100];
	memset(count,0,sizeof(count));
	int max=0;
	for(int i=0;i<n;i++)
	{
	    int t;
	    cin>>t;
	    int dis=-1;
	    for(int i=0;i<v.size();i++)
	    {
		if(v[i]==t)
		{
		    dis=i;
		    break;
		}
	    }
	    if(dis==-1)
		v.push_back(t);
	    else
	    {
		count[dis]++;
		if(count[dis]>count[max])
		    max=dis;
		//	if(count[dis]>n/2)
		//  break;
	    }
	}
	cout<<v[max]<<endl;
    }
    return 0;
}
