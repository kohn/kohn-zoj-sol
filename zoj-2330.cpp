#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#define E exp(1.0f)
#define PRE 0.000000001
using namespace std;
double cmp;
double Abs(double n)
{
	return n>0?n:-n;
}
bool Equal(double numa,double numb)
{
	if(Abs(numa-numb)<PRE)
		return true;
	return false;
}
double fun(double from,double to)
{
	double t=(from+to)/2;
	double ans=t/log(t);
	while(!Equal(ans,cmp))
	{
		if(ans<cmp)
			from=t;
		else
			to=t;
		t=(from+to)/2;
		ans=t/log(t);
	}
	return t;
}
int main()
{
	double numa;
	while(cin>>numa)
	{
		if(numa>E&&!Equal(numa,E))
			cout<<-1<<endl;
		else
			if(Equal(numa,E))
				printf("%.5lf\n",E);
		else
		{
			cmp=numa/log(numa);
			printf("%.5lf\n",fun(E,45));
		}
	}
	return 0;
}