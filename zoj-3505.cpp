#include "iostream"
#include "string.h"
#include "math.h"
using namespace std;
#define Max 1000
long int Number(char *szNum,int digit)
{
    int k=digit-strlen(szNum);
    long sum=pow(3,k+1)/2;
    return sum;
}
void Search(char *szRoot,int digit,long k)
{
    int length=strlen(szRoot)+1;
    int i,j;
    szRoot[length-1]='0';
    szRoot[length]=0;
    char szChild[3][Max];
    for(i=0,j=0;i<3;i++,j++)
    {
	strcpy(szChild[i],szRoot);
	szChild[i][length-1]+=j;
	if(szChild[i][length-2]==szChild[i][length-1])
	{
	    szChild[i][length-1]++;
	    j++;
	}
    }
    for(i=2;i>=0;i--)
    {
	long num=Number(szChild[i],digit);
	if(num<=k)
	{
	    k-=num;
	    if(k==0)
	    {
		cout<<szChild[i]<<endl;
		return ;
	    }
	}
	else
	{
	    Search(szChild[i],digit,k);
	    return;
	}
    }
    return;
}
int smaller(char *szNum,int digit,long k)
{
    char szParent[Max];
    strcpy(szParent,szNum);
    int length=strlen(szNum);
    szParent[length-1]='0';
    int i,j;
    if(length==1)
    {
	while(--szNum[0]>'0')
	{
	    long num=Number(szNum,digit);
	    if(num<=k)
	    {
		k-=num;
		if(k==0)
		{
		    cout<<szNum<<endl;
		    return 0;
		}

	    }
	    else
	    {
		Search(szNum,digit,k);
		return 0;
	    }
	}
    }
    else
    {
    char szChild[3][Max];
    for(i=0,j=0;i<3;i++,j++)
    {
	strcpy(szChild[i],szParent);
	szChild[i][length-1]+=j;
	if(szChild[i][length-2]==szChild[i][length-1])
	{
	    szChild[i][length-1]++;
	    j++;
	}
    }
    for(i=2;i>=0;i--)
    {
	if(strcmp(szChild[i],szNum)<0)
	{
	    long number=Number(szChild[i],digit);
	    if(number<=k)
	    {
		k-=number;
		if(k==0)
		{
		    cout<<szChild[i]<<endl;
		    return 0;
		}
	    }
	    else
	    {
		Search(szChild[i],digit,k);
		return 0;
	    }
	}
    }
    k--;
    szNum[length-1]=0;
    if(k==0)
    {
	cout<<szNum<<endl;
	return 0;
    }
    smaller(szNum,digit,k);
    }
    return 0;
}

int main()
{
    char szNum[Max];
    int digit;
    long int k;
    while(cin>>digit>>k)
    {
	cin>>szNum;
	smaller(szNum,digit,k);
    }
    return 0;
}
