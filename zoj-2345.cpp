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
int disc[150];
inline int cal(int day)
{
	return (1+day)*day/2;
}
inline void Prepare()
{
	for(int i=0;i<150;i++)
		disc[i]=((1+i)*i)/2;
}
long long Sum(int day)
{
	long long count=0;
	for(int i=1;i<=day;i++)
		count+=i*i;
	return count;
}
long long CalCoin(int day)
{
	int i;
	for(i=0;i<149;i++)
		if(day>=disc[i] && day<disc[i+1])
			break;
	return Sum(i)+(day-disc[i])*(i+1);
}
int main()
{
	int N;
	cin>>N;
	Prepare();
	while(N--)
	{
		int day;
		while(cin>>day)
		{
			if(day==0)
				break;
			cout<<day<<" "<<CalCoin(day)<<endl;
		}
		if(N!=0)
			cout<<endl;
	}
	return 0;
}