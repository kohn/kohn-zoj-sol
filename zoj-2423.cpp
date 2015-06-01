#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
bool matrix[729][729];
void Print(int n,int x,int y)
{
    if(n==1)
    {
	matrix[x][y]=true;
	return;
    }
    int t=pow(3,n-2);
    Print(n-1,x,y);
    Print(n-1,x+t*2,y);
    Print(n-1,x+t,y+t);
    Print(n-1,x,y+t*2);
    Print(n-1,x+t*2,y+t*2);
}
int main()
{
    int n;
    int count=0;
    cin>>n;
    while(n>0)
    {
	int t=pow(3,n-1);
	for(int i=0;i<t;i++)
	    for(int j=0;j<t;j++)
		matrix[i][j]=false;
	Print(n,0,0);
	for(int i=0;i<t;i++)
	{
	    for(int j=0;j<t;j++)
	    {
		if(matrix[i][j]==false)
		{
		    int temp=j;
		    for(;j<t;j++)
			if(matrix[i][j]==true)
			{
			    for(int l=temp;l<j;l++)
				cout<<" ";
			    j--;
			    break;
			}
		}
		else
		    cout<<"X";
	    }
	    cout<<endl;
	}
	cout<<"-"<<endl;
	cin>>n;
    }
    return 0;
}
