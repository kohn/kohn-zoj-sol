#include "stdio.h"
int main()
{
	int z,o,j;
	int a,b,c;
	int i;
	char ch[100];
	int flag;
	while(gets(ch))
	{
		i=0;
		o=z=j=0;
		flag=0;
		while(ch[i]!=0)
		{
			switch(ch[i])
			{
			case 'Z':
				if(flag==0)
					flag=1;
				z++;
				a=o;
				o=0;
				break;
			case'O':o++;
				break;
			case'J':
				if(flag==0)
					flag=2;
				j++;
				b=o;
				o=0;
				break;
			default:break;
			}
			i++;
		}
		c=o;
		if(z==j&&c-b==a&&flag==1&&b>0)
			printf("Accepted\n");
		else
			printf("Wrong Answer\n");
	}
	return 0;
}



