#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
void fun(int rowCnt[100],int colCnt[100],int n)
{
    int rowodd,colodd;
    int orcnt=0,occnt=0;
    for(int i=0;i<n;i++)
	if(rowCnt[i]%2==1)
	{
	    rowodd=i;
	    orcnt++;
	}
    for(int j=0;j<n;j++)
	if(colCnt[j]%2==1)
	{
	    colodd=j;
	    occnt++;
	}
    if(occnt==0 && orcnt==0)
	cout<<"OK"<<endl;
    else
	if(occnt==1 && orcnt==1)
	    cout<<"Change bit ("<<rowodd+1<<","<<colodd+1<<")"<<endl;
	else
	    cout<<"Corrupt"<<endl;

}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
	int matrix[100][100];
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
		cin>>matrix[i][j];
	int rowCnt[100],colCnt[100];
	for(int i=0;i<n;i++)
	{
	    rowCnt[i]=0;
	    for(int j=0;j<n;j++)
		rowCnt[i]+=matrix[i][j];
	}
	for(int j=0;j<n;j++)
	{
	    colCnt[j]=0;
	    for(int i=0;i<n;i++)
		colCnt[j]+=matrix[i][j];
	}
	fun(rowCnt,colCnt,n);
	cin>>n;
    }
    return 0;

}
