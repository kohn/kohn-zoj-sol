#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
	char str[1024];
	char des[1024];
	scanf("%s",str);
	int k=0;
	int length=strlen(str);
	for(int i=0;i<length;)
	{
	    int count=1;
	    for(int j=i+1;j<length;j++)
	    {
		if(str[j]==str[i])
		    count++;
		else break;
	    }
	    if(count<10 && count>1)
		des[k++]=count+'0';
	    else
		if(count/10>0 && count/10<10)
		{
		    des[k++]=count/10+'0';
		    des[k++]=count%10+'0';		
		}
		else if(count==100)
		{
		    des[k++]='1';
		    des[k++]='0';
		    des[k++]='0';
		}
	    des[k++]=str[i];
	    i+=count;
	}
	des[k]=0;
	printf("%s\n",des);
    }
    return 0;
}
