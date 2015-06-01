#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int flag[20001];
    while(m!=0 && n!=0)
    {
	for(int i=0;i<n;i++)
	    flag[i]=0;
	int count=0;
	for(int i=0;i<m;i++)
	{
	    int t;
	    cin>>t;
	    if(flag[t-1]==0)
		flag[t-1]++;
	    else
		if(flag[t-1]==1)
		{
		    count++;
		    flag[t-1]++;
		}
	}
	cout<<count<<endl;
	cin>>n>>m;
    }
    return 0;
}
