//2277
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
	double m;
	cin>>m>>n;
    while(m>=0&&n>=0)
    {
		int  j[1001],f[1001];
		double b;
		vector<double> bi;
		multimap<double,int> ma;
		double total=0;
        for(int i=0;i<n;i++)
        {
			cin>>j[i]>>f[i];
			if(f[i]!=0)
				b=(double)j[i]/f[i];
			else
				b=100000000;
			ma.insert(pair<double,int>(b,i));
			bi.push_back(b);
		}
		sort(bi.begin(),bi.end(),greater<double>());
		for(vector<double>::iterator it=bi.begin();it!=bi.end();it++)
		{
			multimap<double,int>::iterator iter=ma.find(*it);
			int index=iter->second;
			if(f[index]<m)
			{
				m-=f[index];
				total+=j[index];
			}
			else
			{
				if(f[index]==0)
					total+=j[index];
				else
				{
					total=total+(j[index]*m/f[index]);
					break;
				}
			}
			ma.erase(iter);
		}
		printf("%.3lf\n",total);
		cin>>m>>n;
    }
	return 0;
}