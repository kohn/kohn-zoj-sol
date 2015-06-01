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
int main()
{
	int x,y,minx,miny,maxx,maxy;
	maxx=maxy=0x80000000;
	minx=miny=0x7fffffff;
	cin>>x>>y;
	while(1)
	{
		if(x==0 && y==0)
			break;
		else
		{
			do
			{
				if(x==0 && y==0)
					break;
				if(x>maxx)
					maxx=x;
				if(x<minx)
					minx=x;
				if(y>maxy)
					maxy=y;
				if(y<miny)
					miny=y;
				cin>>x>>y;
			}while(!(x==0 && y==0));
			cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy<<endl;
			maxx=maxy=0x80000000;
			minx=miny=0x7fffffff;
		}
		cin>>x>>y;
	}
	return 0;
}