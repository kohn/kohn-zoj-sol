#include "stdio.h"
#include "string.h"
int main()
{
	char ch[100][20];
	char test[20];
	int m,n;
	int person;
	int i,j,l,k;
	int count=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%s",ch[i]);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&person);
			for(j=0;j<person;j++)
			{
				scanf("%s",test);
				for(l=0;l<m;l++)
				{
					if(strcmp(test,ch[l])==0)
						count++;
				}
			}
			printf("%d\n",count);
			count=0;
	}
	return 0;
}
	

