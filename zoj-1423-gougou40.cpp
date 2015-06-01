#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#include <string.h>
#include <stdio.h>
#define E exp(1.0f)
#define PRE 0.0000001
using namespace std;
#define POP stack[--sp]
#define PUSH(x) stack[sp++]=x
int stack[1024];
int sp=0;
int main()
{
	int M;
	char buffer[1024];
	int i,j;
	int flag;
	int temp;
	scanf("%d",&M);
	getchar();
	while(M--)
	{
		flag=1;
		sp=0;
		gets(buffer);
		for(i=0;buffer[i]!=0;i++)
		{
			if(buffer[i]=='(')
				for(j=i;buffer[j]!=')';j++)
					if(buffer[j]=='+'||buffer[j]=='-')
						break;
			if(buffer[j]==')')
				buffer[i]=buffer[j]=' ';
		}
		for(i=0;buffer[i]!=0;i++)
		{
			if(buffer[i]=='(')
			{
				PUSH(flag);
				if(flag==0)
				{
					printf("(");
					flag=1;
				}
			}
			else if(buffer[i]=='-')
			{
				flag=0;
				printf("-");
			}
			else if(buffer[i]==')')
			{
				temp=POP;
				if(temp==0)
					printf(")");
			}
			else if(buffer[i]==' ')
						;
			else
			{
				flag=1;
				printf("%c",buffer[i]);
			}
		}
		printf("\n");
	}
	return 0;
}