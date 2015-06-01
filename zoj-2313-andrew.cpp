#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;
char res[2001];
char num[2005];
void Divide(int length)
{
    int carry=0;
    for(int i=0;i<length;i++)
    {
        int n=num[i]-'0'+carry;
        if(n%2)
            carry=10;
        else
            carry=0;
        res[i]='0'+n/2;
    }
    res[length]='\0';
}
void Translate(int n,int length)
{
    if((num[length-1]-'0')>=n)
        num[length-1]-=n;
    else
    {
        for(int i=length-2;i>=0;i--)
        {
           if(num[i]=='0')
                num[i]='9';
           else
           {
               num[i]-=1;
               break;
           }
        }
        num[length-1]=num[length-1]+10-n;
    }
    Divide(length);
}
void  Huzhi()
{
    int length=strlen(num);
    int last2;
    if(length==1)
        last2=atoi(num);
    else
        last2=atoi(&num[length-2]);
    if(last2%2)
        Translate(1,length);
    else
    if(last2%4)
        Translate(4,length);
    else
    if(last2%4==0)
        Translate(2,length);
}
int main()
{
    int repeat;
    int i;
    scanf("%d",&repeat);
    while(repeat--)
    {
        scanf("%s",num);
        Huzhi();
        for(i=0;i<strlen(res);i++)
            if(res[i]!='0')
                break;
        printf("%s\n",&res[i]);
        if(repeat!=0)
            printf("\n");
    }
	return 0;
}