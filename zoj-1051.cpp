#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int degree(int dish[20][20],int i,int j)
{
    int x[]={0,1,0,-1};
    int y[]={1,0,-1,0};
    int sum=dish[i][j];
    for(int k=0;k<4;k++)
    {
	if(i+x[k]<20 && i+x[k]>=0 && j+y[k]<20 && j+y[k]>=0)
	    sum+=dish[i+x[k]][j+y[k]];
    }
    return sum;
}
void Infect(int K[16],int dish[20][20])
{
    int temp[20][20];
    memset(temp,0,sizeof(temp));
    for(int i=0;i<20;i++)
	for(int j=0;j<20;j++)
	{
	    int deg=degree(dish,i,j);
	    temp[i][j]=dish[i][j]+K[deg];
	    if(temp[i][j]>3)
		temp[i][j]=3;
	    else if(temp[i][j]<0)
		temp[i][j]=0;
	}
    for(int i=0;i<20;i++)
	for(int j=0;j<20;j++)
	    dish[i][j]=temp[i][j];
}
int main()
{
    int N;
    int K[16];
    int dish[20][20];
    cin>>N;
    while(N--)
    {
	int day;
	cin>>day;
	for(int i=0;i<16;i++)
	    cin>>K[i];
	for(int i=0;i<20;i++)
	    for(int j=0;j<20;j++)
		cin>>dish[i][j];
	for(int i=0;i<day;i++)
	    Infect(K,dish);
	for(int i=0;i<20;i++)
	{
	    for(int j=0;j<20;j++)
	    {
		switch(dish[i][j])
		{
		case 0:cout<<".";break;
		case 1:cout<<"!";break;
		case 2:cout<<"X";break;
		case 3:cout<<"#";break;
		default:cout<<"  ";
		}

	    }
	    cout<<endl;
	}
	if(N!=0)
	    cout<<endl;
    }
    return 0;
}
