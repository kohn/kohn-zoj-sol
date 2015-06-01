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
bool fun(int a[3001],int n)
{
    bool flag[3002];
    for(int i=0;i<n;i++)
	flag[i]=false;
    for(int i=1;i<n;i++)
    {
	int t=abs(a[i]-a[i-1]);
	if(t>n-1)
	    return false;
	else
	{
	    if(flag[t]==true)
		return false;
	    flag[t]=true;
	}
    }
    return true;	
}
int main()
{
    int n;
    while(cin>>n)
    {
	int a[3001];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	if(fun(a,n))
	    cout<<"Jolly"<<endl;
	else
	    cout<<"Not jolly"<<endl;
    }
    return 0;
}
