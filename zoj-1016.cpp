#include "stdio.h"
#include "string.h"
int main()
{
	int ri,repeat,i,j,m;
	int pcon[100];
	int paren[100];
	int wcon[100],n=0;
	int numofparen;
	int flag[100];
	int count,k;
	scanf("%d",&repeat);
	for(ri=0;ri<repeat;ri++)
	{
		scanf("%d",&m);
		memset(flag,0,sizeof(flag));
		pcon[0]=0;
		k=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&pcon[i+1]);
			for(j=0;j<pcon[i+1]-pcon[i];j++)
				paren[k++]=0;
			paren[k++]=1;
		}
	numofparen=k;
	count=0;
	for(i=0;i<numofparen;i++)
	{
		if(paren[i]==1)
		{
			for(j=i-1;j>=0;j--)
				if(paren[j]==0&&flag[j]==0)
					break;
			flag[j]=1;
			for(k=j+1;k<=i;k++)
				if(paren[k]==1)
					count++;
			wcon[n++]=count;
			count=0;
		}
	}
	printf("%d",wcon[0]);
	for(i=1;i<n;i++)
		printf(" %d",wcon[i]);
	printf("\n");
	n=0;
	}
	return 0;
}
