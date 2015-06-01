#include "stdio.h"
int main()
{
	char ch;
	char temp=0;
	int i=0;
	int count=0;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch>=65&&ch<=90||ch>=97&&ch<=122)
		{
			if(i==0)
			{
				printf("%c",ch);
				i++;
			}
			else
			{
				temp=ch;
				i++;
			}
		}
		else
		{
			if(temp!=0)
				if(i-2==0)
				printf("%c",temp);
				else
					printf("%d%c",i-2,temp);
			printf("%c",ch);
			i=0;
			temp=0;
		}
	}
	return 0;
}