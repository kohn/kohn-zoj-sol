/*2729*/
#include <iostream>
#include <stdio.h>
using namespace std;
unsigned short num[7001];
int Cal7(int start)
{

    int sum=0;
    int array[16*7];
    for(int i=start;i<7+start;i++)
    {
	 unsigned short temp=0x8000;
	 for(int j=0;j<16;j++)
	 {
	      if(num[i]&temp)
		   array[(i-start)*16+j]=1;
	      else
		   array[(i-start)*16+j]=0;
	      temp>>=1;
	 }
    }
    for(int i=0;i<16;i++)
    {
	 int s=0;
	 for(int j=1;j<7;j++)
	      s=s*2+array[i*7+j];
	 sum+= (array[i*7]==0?s:-s);
    }
    return sum;
}
long long Cal(int n)
{
    int i;
    long long sum=0;
    for(i=0;i<n/7;i++)
	sum+=Cal7(i*7);
    return sum;
}
int main()
{
    int N;
    int i;
    cin>>N;
    while(N!=-1)
    {
	for(i=0;i<N;i++)
	     cin>>num[i];
	cout<<Cal(N)<<endl;
	cin>>N;
    }
    return 0;
}
