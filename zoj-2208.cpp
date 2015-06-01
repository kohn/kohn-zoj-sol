#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num!=0)
	{
		char str[200];
		cin>>str;

		int i,j;
		int times=strlen(str)/num;
		for(i=0;i<num;i++)
		{
			for(j=0;j<times;j++)
			{
				if(j%2==0)
					cout<<str[num*j+i];
				else
					cout<<str[num*(j+1)-i-1];
			}
		}
		cout<<endl;
		cin>>num;
	}
	return 0;
}