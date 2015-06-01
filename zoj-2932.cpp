#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
//1350
map<char,string> m;
int main()
{
    m.insert(make_pair(' ',"%20"));
    m.insert(make_pair('!',"%21"));
    m.insert(make_pair('$',"%24"));
    m.insert(make_pair('%',"%25"));
    m.insert(make_pair('(',"%28"));
    m.insert(make_pair(')',"%29"));
    m.insert(make_pair('*',"%2a"));
    char str[1024];
    while(cin.getline(str,1024) && !(str[0]=='#' && str[1]==0))
    {
	for(int i=0;str[i]!=0;i++)
	{
	    map<char,string>::iterator iter=m.find(str[i]);
	    if(iter!=m.end())
		cout<<iter->second;
	    else
		cout<<str[i];
	}
	cout<<endl;
    }
    return 0;
}
