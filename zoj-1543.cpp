#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
vector<double> v;
int main()
{
    int n;
    while(cin>>n)
    {
	v.clear();
	for(int i=0;i<n;i++)
	{
	    double t;
	    cin>>t;
	    v.push_back(t);
	}
	sort(v.begin(),v.end());
	double t=v[v.size()-1];
	for(int i=v.size()-2;i>=0;i--)
	    t=2*sqrt(t*v[i]);
	printf("%.3lf\n",t);
    }
    return 0;

}
