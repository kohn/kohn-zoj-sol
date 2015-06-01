#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
//1350
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int n;
	cin>>n;
	bool locked[101];
	for(int i=0;i<101;i++)
	    locked[i]=false;
	for(int i=2;i<=n;i++)
	{
	    for(int j=i;j<=n;j+=i)
	    {
		if(locked[j]==false)
		    locked[j]=true;
		else
		    locked[j]=false;
	    }
	}
	int count=0;
	for(int i=1;i<=n;i++)
	    if(locked[i]==false)
		count++;
	cout<<count<<endl;
    }
    return 0;
}
