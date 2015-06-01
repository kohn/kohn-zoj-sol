#include "stdio.h"
#include "string.h"
#include "math.h"
double mindis(int square[41][41],int x,int y,int side)
{
    int i,j;
    double max=0;
    double dis;
    for(i=0;i<side;i++)
	for(j=0;j<side;j++)
	    if(square[i][j])
	    {
		dis=sqrt(pow(i-x,2)+pow(j-y,2));
		if(dis>max)
		    max=dis;
	    }
    return max;
}


int main()
{
    int square[41][41];
    int testcases;
    int i,j;
    int hatch,side;
    double min;
    int x,y;
    int flag;
    scanf("%d",&testcases);
    while(testcases--)
    {
	memset(square,0,sizeof(square));
	flag=0;
	i=j=0;
	scanf("%d%d",&side,&hatch);
	for(i=0;i<hatch;i++)
	{
	    scanf("%d%d",&x,&y);
	    square[x][y]=1;
	}
	for(i=0;i<side;i++)
	{
	    for(j=0;j<side;j++)
	    {
		if(!square[i][j])
		{
		min=mindis(square,i,j,side);
		if(!(min>i||min>j||min>side-i||min>side-j))
		{
		    printf("%d %d\n",i,j);
		    flag=1;
		    break;
		}
		}
	    }
	    if(flag==1)
		break;
	}
	if(i==side&&j==side)
	    printf("poodle\n");
    }
    return 0;
}




