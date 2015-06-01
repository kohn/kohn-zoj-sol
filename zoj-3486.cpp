#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
	int repeat;
	int a[10000];
	cin>>repeat;
	while(repeat--)
	{
		int n;
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			a[num]++;
		}
		int max=1001;
		for(int i=1001;i<10000;i++)
		{
			if(a[i]>=a[max])
				max=i;
		}
		cout<<max<<endl;
	}
}