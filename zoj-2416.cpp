#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
using namespace std;
int stock[10000];
bool flag[10000];

deque<pair<int,int> > v;
int dec(int a)
{
	if(a==1)
		return 9;
	else
		return a-1;
}
int inc(int a)
{
	if(a==9)
		return 1;
	else
		return a+1;
}
void Push(int temp,int newtimes)
{
	if(flag[temp]==false)
	{
		v.push_back(pair<int,int>(temp,newtimes));
		flag[temp]=true;
	}
}
void fun()
{
	while(!v.empty())
	{
		pair<int,int>  iter=v.front();
		v.pop_front();
		int code=iter.first;
		stock[code]=iter.second;
		int newtimes=iter.second+1;
		int q=code/1000,b=(code-q*1000)/100,s=(code%100)/10,g=code%10;

		int temp=code-q*1000+dec(q)*1000;
		Push(temp,newtimes);
		temp=code-q*1000+inc(q)*1000;
		Push(temp,newtimes);
		temp=code-b*100+dec(b)*100;
		Push(temp,newtimes);
		temp=code-b*100+inc(b)*100;
		Push(temp,newtimes);
		temp=code-s*10+dec(s)*10;
		Push(temp,newtimes);
		temp=code-s*10+inc(s)*10;
		Push(temp,newtimes);
		temp=code-g+dec(g);
		Push(temp,newtimes);
		temp=code-g+inc(g);
		Push(temp,newtimes);
		temp=q*100+b*1000+s*10+g;
		Push(temp,newtimes);
		temp=q*1000+b*10+s*100+g;
		Push(temp,newtimes);
		temp=q*1000+b*100+s+g*10;
		Push(temp,newtimes);
	}
}

int main()
{
	int T;
	cin>>T;
	int CorrectCode;
	int code;
	while(T--)
	{
		for(int i=1000;i<10000;i++)
		{
			stock[i]=-1;
			flag[i]=false;
		}
		v.clear();
		cin>>code>>CorrectCode;
		Push(CorrectCode,0);
		fun();
		cout<<stock[code]<<endl;
	}
	return 0;
}