#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int ri=1;ri<=T;ri++)
    {
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	    if(str[i]=='Z')
		str[i]='A';
	    else
		str[i]=str[i]+1;
	cout<<"String #"<<ri<<endl;
	cout<<str<<endl<<endl;
    }
    return 0;
}
