#include "stdio.h"
#include "string.h"
int main()
{
	int ri,repeat;
	char date[2][3][10];
	int i,j;
	int flag;
	scanf("%d",&repeat);
	for(ri=0;ri<repeat;ri++)
	{
		flag=0;
		for(i=0;i<2;i++)
			for(j=0;j<3;j++)
				scanf("%s",date[i][j]);
		for(j=0;j<3;j++)
		{
			if(strcmp(date[0][j],date[1][j])>0)
			{
				printf("cpcs\n");
				flag=1;
				break;
			}
			if(strcmp(date[0][j],date[1][j])<0)
			{
				printf("javaman\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("same\n");
	}
	return 0;
}
			
		


