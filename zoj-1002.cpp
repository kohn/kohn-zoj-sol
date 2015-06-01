#include "stdio.h"
char map[4][4];
int sta[4][4];
int row,max;
int canput(int i,int j);
void fun(int k,int num);
int main()
{
	int i,j;
	scanf("%d",&row);
	getchar();
	while(row!=0)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<row;j++)
			{
				scanf("%c",&map[i][j]);
			}
			getchar();
		}
		for(i=0;i<row;i++)
			for(j=0;j<row;j++)
				sta[i][j]=0;
		fun(0,0);
		printf("%d\n",max);
		max=0;
		scanf("%d",&row);
		getchar();
	}
	return 0;
}
int canput(int i,int j)
{
	int a,b;
	for(a=i-1;a>=0;a--)
	{
		if(sta[a][j]==1)
			return 0;
		if(map[a][j]=='x')
			break;
	}
	for(b=j-1;b>=0;b--)
	{
		if(sta[i][b]==1)
			return 0;
		if(map[i][b]=='x')
			break;
	}
	return 1;
}
void fun(int k,int num)
{
	int i,j;
	if(k==row*row)
	{
		if(max<num)
			max=num;
		return;
	}
	i=k/row;
	j=k%row;
	if((map[i][j]=='.')&&(canput(i,j)))
	{
		sta[i][j]=1;
		fun(k+1,num+1);
		sta[i][j]=0;
	}
	fun(k+1,num);
}


