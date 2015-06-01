#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int Cal(int n)
{
     int count=1;
     int t=1;
     while(t%n!=0)
     {
	  if(t<n)
	  {
	       t=t*10+1;
	       count++;
	  }
	  t=t%n;
     }
     return count;
}
int main()
{
     int n;
     while(cin>>n)
     {
	  
	  cout<<Cal(n)<<endl;
     }
     return 0;
}
