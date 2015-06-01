#include "stdio.h"
#include "math.h"
int main()
{
	int ver,par,clo;
	int m,n;
	int least;
	int ri,repeat;
	scanf("%d",&repeat);
	for(ri=0;ri<repeat;ri++)
	{
		scanf("%d%d",&m,&n);
		least=3000001;
		if(n+1==m)
		{
			printf("0\n");
		}
		else
		{	if(m<=n)
				printf("-1\n");
			else
			{
		        for(ver=1;ver<=sqrt(m);ver++)
				{
			        if((m-n-ver)%(2*ver-1))
				         continue;
			         par=(m-n-ver)/(2*ver-1);
			        clo=n-ver-par;
			        if(least>clo&&clo>=0)
			          least=clo;
				}
			     if(least==3000001)
				     printf("-1\n");
			     else
				     printf("%d\n",least);
			}
		}
	}
	return 0;
}
