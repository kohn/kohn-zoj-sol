#include <iostream>
using namespace std;
int main()
{
     int n,u,d;
     cin>>n>>u>>d;
     while(n!=0)
     {
	  cout<<2*( (n-u)/(u-d)+ ( ( (n-u)%(u-d)>0 ) ?1:0) ) + 1 <<endl;
	  cin>>n>>u>>d;
     }
     return 0;
}
