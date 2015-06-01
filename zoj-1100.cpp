#include <iostream>
#include <map>
#include <math.h>
#include <string>
//#include "d:\\zoj\\mylib.cpp"
#define pi 2*acos(0)
using namespace std;
int main()
{
     int n,m;
     while(cin>>n>>m)
     {
	  if(n==0 && m==0)
	       break;
	  double result=1.0;
	  if((n*m)%2==1 || n==0 || m==0)
	  {
	       cout<<0<<endl;
	       continue;
	  }

	  for(int i=1;i<=n/2;i++)
	       for(int j=1;j<=m/2;j++)
		    result*=4*(pow(cos(pi*i/(n+1)),2.0)+pow(cos(pi*j/(m+1)),2.0));
	  cout<<(long long)result<<endl;
     }
     return 0;
}
