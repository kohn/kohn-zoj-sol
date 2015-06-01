#include "stdio.h"
int fun(int a)
{
	int i=0;
	int result=0;
	while(a!=0)
	{
		result=result*10+a%10;
		a=a/10;
	}
	return result;
}

int main()
{
	int ri,repeat;
	int a,b,result;
	scanf("%d",&repeat);
	for(ri=0;ri<repeat;ri++)
	{
		scanf("%d%d",&a,&b);
		a=fun(a);
		b=fun(b);
		result=fun(a+b);
		printf("%d\n",result);
	}
	return 0;
}
