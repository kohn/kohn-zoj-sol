#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> m;
int main()
{
     int n;
     cin>>n;
     while(n!=0)
     {
	  m.clear();
	  int max=0;
	  string result;
	  for(int i=0;i<n;i++)
	  {
	       string color;
	       cin>>color;
	       if(m.find(color)==m.end())
		    m[color]=1;
	       else	    
		    m[color]=m[color]+1;
	       if(m[color]>max)
	       {
		    max=m[color];
		    result=color;
	       }

	  }
	  cout<<result<<endl;
	  cin>>n;
     }
     return 0;
}
