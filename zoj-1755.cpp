#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
	string name[9];
	int n;
	cin>>n;
	while(n!=-1)
	{
		int a,b,c;
		int a1,a2;
		int max=0;
		int min=1000;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>c>>name[i];
			int t=a*b*c;
			if(t>max)
			{
				a1=i;
				max=t;
			}
			if(t<min)
			{
				a2=i;
				min=t;
			}
		}
		cout<<name[a1]+" took clay from "+name[a2]+"."<<endl;
		cin>>n;
	}
	return 0;
}