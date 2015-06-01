#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
char s[100000],t[100000];
int slength;
bool Find(int a,int b)
{
    if(a>=slength)
	return true;
    for(int i=b;t[i]!=0;i++)
	if(t[i]==s[a])
	    if(Find(a+1,i+1))
		return true;
    return false;
}
int main()
{

    while(scanf("%s%s",s,t)!=EOF)
    {
	for(int i=0;s[i]!=0;i++)
	    slength=i+1;
	if(Find(0,0))
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;
    }
    return 0;

}
