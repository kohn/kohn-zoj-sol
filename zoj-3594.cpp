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
int main()
{
	int T;
	char *tiangan[]={"Jia","Yi","Bing","Ding","Wu","Ji","Geng","Xin","Ren","Gui"};
	char *dizhi[]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};
	cin>>T;
	while(T--)
	{
		int years;
		cin>>years;
		if(years<0)
			years++;
		if(years<1911)
		{
			int temp=(1911-years)/60+1;
			years+=temp*60;
		}
		int temp=(years-1911)%60;
		int i=(7+temp%10)%10;
		int j=(11+temp%12)%12;
		cout<<tiangan[i]<<dizhi[j]<<endl;
	}
	return 0;
}