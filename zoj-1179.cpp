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
#define PRE 0.0000001
using namespace std;
int Compare(const char w1[],const char w2[],int location,int length1,int length2)
{
	int count=0;
	for(int i =location;i<length1;i++)
	{
		if(i-location>=length2)
			break;
		if(w1[i]==w2[i-location])
			count++;
	}
	return count;
}
int Convert(int son,int mum)
{
	if(son==1)
		return 1;
	int remainder=mum%son;
	if(remainder==0)
		return son;
	else
		return Convert(remainder,son);
}
string appx(const char w1[],const char w2[],int length1,int length2)
{
	int max=0;
	for(int i=0;i<length1;i++)
	{
		int value=Compare(w1,w2,i,length1,length2);
		if(value>max)
			max=value;
	}
	for(int i=0;i<length2;i++)
	{
		int value=Compare(w2,w1,i,length2,length1);
		if(value>max)
			max=value;
	}
	char temp[100];
	if(max==0)
		return "0";
	int divider = Convert(2*max,length1+length2);
	sprintf(temp,"%d/%d",2*max/divider,(length1+length2)/divider);
	string str(temp);
	return str;
}
int main()
{
	string w1,w2;
	cin>>w1;
	while(w1!="-1")
	{
		cin>>w2;
		cout<<"appx("<<w1<<","<<w2<<") = ";
		if(w1==w2)
			cout<<1<<endl;
		else
			cout<<appx(w1.c_str(),w2.c_str(),w1.length(),w2.length())<<endl;
		cin>>w1;
	}
	return 0;
}