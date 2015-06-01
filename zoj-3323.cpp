#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while(n--)
     {
	  string str;
	  cin>>str;
	  for(int i =0;i<str.length();i++)
	       if(!(str[i]>='0' && str[i]<='9'))
		    cout<<str[i];
	  cout<<endl;
     }
     return 0;
}
