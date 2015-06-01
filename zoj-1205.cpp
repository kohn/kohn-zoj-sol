#include <string.h>
#include <stdio.h>
int CharToInt(char ch)
{
	if(ch<='9'&&ch>='0')
		return ch-'0';
	if(ch>='a' && ch<='z')
		return ch-'a'+10;
}
char IntToChar(int a)
{
	if(a>=10)
		return a+'a'-10;
	else
		return a+'0';
}
int add(char a,char b,int carry,char *c)
{
	int numa=CharToInt(a);
	int numb=CharToInt(b);
	int ans=numa+numb+carry;
	if(ans>19)
	{
		*c=IntToChar(ans-20);
		return 1;
	}
	else
	{
		*c=IntToChar(ans);
		return 0;
	}
}
void fun(char *numa,char *numb,char *ans,int lengtha,int lengthb)
{
	if (lengtha<lengthb)
	{
		fun(numb,numa,ans,lengthb,lengtha);
		return ;
	}

	int i;
	int dif=lengtha-lengthb;
	int carry=0;
	for(i=lengtha;i>0;i--)
	{
		if(i<=dif)
			carry=add(numa[i],'0',carry,&ans[i]);
		else
			carry=add(numa[i],numb[i-dif],carry,&ans[i]);
	}
	ans[0]=IntToChar(carry);
	ans[lengtha+1]='\0';
}

int main()
{
	char numa[103],numb[103];
	char ans[103];
	int lengtha,lengthb;
	while(scanf("%s%s",&numa[1],&numb[1])!=EOF)
	{
		lengtha=strlen(&numa[1]);
		lengthb=strlen(&numb[1]);
		fun(numa,numb,ans,lengtha,lengthb);
		if(ans[0]!='0')
			printf("%s\n",ans);
		else
			printf("%s\n",ans+1);
	}
	return 0;
}

