#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#define MAX 1000000
using namespace std;
int d(int n)
{
    int digitSum=0;
    int temp=n;
    while(temp!=0)
    {
	digitSum+=temp%10;
	temp=temp/10;
    }
    return digitSum+n;
}
bool flag[MAX+1];
int main()
{
    for(int i=0;i<=MAX;i++)
	flag[i]=false;
    for(int t=1;t<=MAX;t++)
    {
	int generator=t;
	if(flag[generator]==false)
	{
	    while(generator<=MAX)
	    {
		generator=d(generator);
		if(flag[generator]==true)
		    break;
		else
		    flag[generator]=true;
	    }
	}
    }
    for(int i=1;i<=MAX;i++)
	if(flag[i]==false)
	    cout<<i<<endl;
    return 0;
}
