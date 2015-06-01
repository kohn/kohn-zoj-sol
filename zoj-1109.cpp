#include <iostream>
#include <string>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <map>
using namespace std;
int main()
{
	char str[100];
	char p[100];
	char word[100];
	int count=0;
	map<string,string> m;
	while(1)
	{
		gets(str);
		if(str[0]!=0)
		{
			int i,j;
			for(i=0;str[i]!=' ';i++)
				p[i]=str[i];
			p[i]=0;
			string sp(p);
			for(j=i+1;str[j]!=0;j++)
				word[j-i-1]=str[j];
			word[j-i-1]=0;
			string sw(word);
			m.insert(make_pair(sw,sp));
		}
		else
			break;
		count++;
	}
	string s;
	while(cin>>s)
	{
		map<string,string>::iterator iter=m.find(s);
		if(iter!=m.end())
			cout<<(*iter).second<<endl;
		else
			cout<<"eh"<<endl;
	}
	return 0;
}