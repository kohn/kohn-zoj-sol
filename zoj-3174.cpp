#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//3202
int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
bool is(int x,int year)
{
    if(x*x==year%100 || x*x==year%1000)
	return true;
    return false;
}
int cal(int year)
{
    if( ((year%100!=0)&&year%4==0) || year%400==0)
	day[1]=29;
    else
	day[1]=28;
    int count=0;
    for(int i=0;i<12;i++)
	if(is(i+1,year))
	{
	    for(int j=1;j<=day[i];j++)
		if(is(j,year))
		   count++;
	}
    return count;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int from,to;
	cin>>from>>to;
	if(from>to)
	    swap(from,to);
	int sum=0;
	for(int i=from;i<=to;i++)
	    sum+=cal(i);
	cout<<sum<<endl;
    }
    return 0;
}
