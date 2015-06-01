#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		int sum=0;
		int temp=num;
		for(int i=0;i<3;i++)
		{
			sum+=pow((double)(num%10),3);
			num=num/10;
		}
		if(temp==sum)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}