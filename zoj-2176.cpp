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
    cin>>n;
    while(n>0)
    {
	int time[11];
	int speed[11];
	time[0]=0;
	for(int i=1;i<=n;i++)
	{
	    cin>>speed[i];
	    cin>>time[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
	    sum+=speed[i]*(time[i]-time[i-1]);
	}
	cout<<sum<<" miles"<<endl;
	cin>>n;
    }
    return 0;
}
