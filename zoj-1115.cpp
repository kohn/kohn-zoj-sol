#include "stdio.h"
#include "string.h"
int main()
{
    int temp,length,t;
    char n[1000];
    scanf("%s",n);
    length=strlen(n);
    while(!(n[0]=='0'&&length==1))
    {
	temp=0;
	while(length!=0)
	{
	    temp=temp+n[length-1]-'0';
	    length--;
	}
	while(temp>=10)
	{
	    t=0;
	    while(temp!=0)
	    {
		t+=temp%10;
		temp=temp/10;
	    }
	    temp=t;
	}
	printf("%d\n",temp);
	scanf("%s",n);
	length=strlen(n);
    }
    return 0;
}


