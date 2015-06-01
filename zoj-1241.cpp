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
	double a,b,c;
	int count=1;
	cin>>a>>b>>c;
	while(!(a==0&&b==0&&c==0))
	{
		cout<<"Triangle #"<<count<<endl;
		if(c==-1)
			printf("c = %.3lf\n",sqrt(pow(a,2)+pow(b,2)));
		else
			if(a==-1)
			{
				if(pow(c,2)<pow(b,2))
					cout<<"Impossible."<<endl;
				else
					printf("a = %.3lf\n",sqrt(pow(c,2)-pow(b,2)));
			}
			else
			{
				if(pow(c,2)<pow(a,2))
					cout<<"Impossible."<<endl;
				else
					printf("b = %.3lf\n",sqrt(pow(c,2)-pow(a,2)));
			}
			cout<<endl;
		count++;
		cin>>a>>b>>c;
	}
	return 0;
}