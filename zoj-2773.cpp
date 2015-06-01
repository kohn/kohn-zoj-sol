#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#include <string.h>
#define E exp(1.0f)
#define PRE 0.0000001
using namespace std;
long long stock[1002];
long long T(int t)
{
	if(stock[t]!=-1)
		return stock[t];
	long long temp=t+T(t-1);
	stock[t]=temp;
	return temp;
}
long long W(int side)
{
	long long t=0;
	for(int i=1;i<=side;i++)
		t+=i*T(i+1);
	return t;
}

int main()
{
	int repeat,ri;
	for(int i=0;i<1001;i++)
		stock[i]=-1;
	stock[1]=1;
	cin>>repeat;
	for(ri=0;ri<repeat;ri++)
	{
		int side;
		cin>>side;
		cout<<ri+1<<" "<<side<<" "<<W(side)<<endl;
	}
	return 0;
}