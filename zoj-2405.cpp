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
int Sum(int num,int ord)
{
	int sum=0;
	while(num!=0)
	{
		sum+=num%ord;
		num/=ord;
	}
	return sum;
}
bool check(int num)
{
	int sd=Sum(num,10);
	int sh=Sum(num,16);
	int st=Sum(num,12);
	if(st==sh && sh==sd)
		return true;
	else
		return false;
}
int main()
{
	for(int i=1000;i<10000;i++)
	{
		if(check(i))
			cout<<i<<endl;
	}
	return 0;
}