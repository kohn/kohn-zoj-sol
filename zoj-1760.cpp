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
    while(1)
    {
	int a[1000];
	int n=0;
	do
	{
	    cin>>a[n++];
	}while(a[n-1]>0);
	if(a[0]<0)
	    break;
	n--;
	int count=0;
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
		if(a[j]==a[i]*2)
		{
		    count++;
		    break;
		}
	cout<<count<<endl;
    }
    return 0;
}
