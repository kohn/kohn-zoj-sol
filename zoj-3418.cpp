#include "stdio.h"
#include "string.h"
void fun(int a,int binary[]);
int compare(int temp[],int binary[]);
int main()
{
	int repeat,ri;
	int m,n;
	int a[100],b;
	int binary[100][30];
	int temp[30];
	int i,j,min_bit;
	int min_number;
	scanf("%d",&repeat);
	for(ri=0;ri<repeat;ri++)
	{
		scanf("%d%d",&m,&n);
		memset(temp,-1,sizeof(temp));
		memset(binary,-1,sizeof(binary));
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
			fun(a[i],binary[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b);	
			min_bit=30;
			fun(b,temp);
			for(j=0;j<m;j++)
			{
				if(compare(temp,binary[j])<min_bit)
				{
					min_bit=compare(temp,binary[j]);
					min_number=a[j];
				}
				else
					if(compare(temp,binary[j])==min_bit)
					{
						if(a[j]<min_number)
							min_number=a[j];
					}
			}
			memset(temp,-1,sizeof(temp));
			printf("%d\n",min_number);
		}
	}
	return 0;
}
void fun(int a,int binary[])
{
	int i=0;
	while(a!=0)
	{
		binary[i++]=a%2;
		a=a/2;
	}
}
int compare(int temp[],int binary[])
{
	int a,b;
	int i;
	int count=0;
	i=0;
	while(temp[i]!=-1)
		i++;
	a=i;
	i=0;
	while(binary[i]!=-1)
		i++;
	b=i;
	if(a<b)
		for(i=a;i<b;i++)
			temp[i]=0;
	else
		for(i=b;i<a;i++)
			binary[i]=0;
	i=0;
	while(temp[i]!=-1)
	{
		if(temp[i]!=binary[i])
			count++;
		i++;
	}
	return count;
}





