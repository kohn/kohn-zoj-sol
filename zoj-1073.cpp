#include <iostream>
#include <string.h>
using namespace std;
bool Check(char szNum[],int length);
bool check(const char szNum[],const char szCom[]);
int main()
{
	char szNum[61];
	while(cin>>szNum)
	{
	if(Check(szNum,strlen(szNum)))
		cout<<szNum<<" is cyclic"<<endl;
	else
		cout<<szNum<<" is not cyclic"<<endl;
	}
    return 0;
}
bool check(const char szNum[],const char szCom[])
{
	int j;
	int length=strlen(szNum);
	for(int i=0;i<length;i++)
	{
		if(szNum[i]==szCom[0])
		{
			int k=i;
			for(j=1;j<length;j++)
			{
				if(k+j>=length)
					k=k-length;
				if(szNum[k+j]!=szCom[j])
					break;
			}
			if(j==length)
				return true;
		}
	}
	return false;
}
void mul(const char szNum[],int m,char szCom[])
{
	int length=strlen(szNum);
	int carry=0;
	for(int i=length-1;i>=0;i--)
	{
		int temp=(szNum[i]-'0')*m+carry;
		szCom[i+1]=temp%10+'0';
		carry=temp/10;
	}
	szCom[0]=carry+'0';
}
void add(const char szNum[],int a,char szCom[])
{
	if(a==0)
		return;
	int length=strlen(szNum);
	char temp[66];
	mul(szNum,a,temp);
	int carry=0;
	for(int i=length+1;i>0;i--)
	{
		int res=temp[i-1]-'0'+szCom[i]-'0'+carry;
		szCom[i]=res%10+'0';
		carry=res/10;
	}
	szCom[0]+=carry;
}
bool Check(char szNum[],int length)
{
	char szCom[65];
	for(int i=1;i<=length;i++)
	{
		if(i<10)
		{
			mul(szNum,i%10,szCom);
			szCom[length+1]=0;
		}
		else
		{
			mul(szNum,i/10,szCom);
			szCom[length+1]='0';
			szCom[length+2]=0;
			add(szNum,i%10,szCom);
		}
		if(!check(szNum,szCom+(strlen(szCom)-length)))
			return false;
	}
	return true;
}
