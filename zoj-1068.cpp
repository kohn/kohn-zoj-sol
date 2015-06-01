#include "stdio.h"
#include "string.h"
int main()
{
	int ri,repeat;
	char ch[100];
	char temp[5];
	int c;
	int result[100];
	char morse[1000];
	char mcode[30][8]={"01","1000","1010","100","0","0010","110","0000","00","0111","101","0100","11","10","111","0110",
		"1101","010","000","1","001","0001","011","1001","1011","1100","0011","1110","0101","1111"};
	int seq[100];
	int count,i,j,k;
	scanf("%d",&repeat);
	count=1;
	for(ri=0;ri<repeat;ri++)
	{
		scanf("%s",ch);
		printf("%d: ",count);
		count++;
		i=0;
		memset(morse,0,1000);
		while(ch[i]!=0)
		{
			if(ch[i]>=65&&ch[i]<=90)
				c=ch[i]-65;
			else
			{
				switch(ch[i])
				{
				case '_':c=26;break;
				case '.':c=27;break;
				case ',':c=28;break;
				case '?':c=29;break;
				default:c=-1;break;
				}
			}
			if(c!=-1)
			{	
				strcat(morse,mcode[c]);
			    seq[i]=strlen(mcode[c]);
			}
			i++;
		}
		for(j=0;j<i/2;j++)
		{
			c=seq[j];
			seq[j]=seq[i-1-j];
			seq[i-1-j]=c;
		}
		c=0;
		k=0;
		for(k=0;k<i;k++)
		{
			for(j=0;j<seq[k];j++)
			{
			    temp[j]=morse[c];
			    c++;
			}
			temp[j]=0;
			for(j=0;j<30;j++)
				if(strcmp(temp,mcode[j])==0)
					break;
			if(j<30)
			{
				if(j<26)
					printf("%c",j+65);
				else
					switch(j)
				{
					case 26:printf("_");break;
					case 27:printf(".");break;
					case 28:printf(",");break;
					case 29:printf("?");break;
					default:break;
				}
			}
			
		}
		printf("\n");
	}
	return 0;
}
		







				









