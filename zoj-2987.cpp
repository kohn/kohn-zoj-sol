#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
     int N;
     int count=1;
     cin>>N;
     while(N--)
     {
	  int index;
	  cin>>index;
	  string str;
	  cin>>str;
	  cout<<count<<" ";
	  for(int i=0;i<str.length();i++)
	  {
	       if(i!=index-1)
		    cout<<str[i];
	  }
	  cout<<endl;
	  count++;
     }
     return 0;
}
