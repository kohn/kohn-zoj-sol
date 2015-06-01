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
inline double Abs(int x)
{
	return x>0?x:(-x);
}
double Value(int r,int g,int b,int R,int G,int B)
{
	return sqrt(( pow( Abs(r-R) ,2) + pow(Abs(g-G),2) + pow(Abs(b-B),2) ));
}
int main()
{
	int R[16],G[16],B[16];
	for(int i=0;i<16;i++)
		cin>>R[i]>>G[i]>>B[i];
	int r,g,b;
	cin>>r>>g>>b;
	while(r!=-1 && g!=-1 && b!=-1)
	{
		double min=Value(r,g,b,R[0],G[0],B[0]);
		int color=0;
		for(int i=1;i<16;i++)
		{
			double t=Value(r,g,b,R[i],G[i],B[i]);
			if(t<min)
			{
				min=t;
				color=i;
			}
		}
		cout<<'('<<r<<','<<g<<','<<b<<") maps to ("<<R[color]<<','<<G[color]<<','<<B[color]<<")"<<endl;
		cin>>r>>g>>b;
	}
	return 0;
}