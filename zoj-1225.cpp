//1225
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
vector<string> word;
vector<int> num;
bool flag[1000];
bool isNumber(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(i==0)
			if(str[i]=='-')
				continue;
		if(str[i]<'0' || str[i]>'9')
			return false;
	}
	return true;
}
int GetNumber(string str)
{
	int num=0;
	for(int i=(str[0]=='-'?1:0);i<str.length();i++)
	{
		num=num*10+str[i]-'0';
	}
	return str[0]=='-'?-num:num;
}
int split(char *str,int length)
{
	string s="";
	int wordCount=0;
	for(int i=0;i<length;i++)
	{
		if(str[i]==',')
			continue;
		if(str[i]==' '|| str[i]=='.')
		{
			if(isNumber(s))
			{
				flag[wordCount]=true;
				int n=GetNumber(s);
				num.push_back(n);
			}
			else
				word.push_back(s);
			wordCount++;
			s="";
		}
		else
			s.push_back(str[i]);
	}
	return wordCount;
}
class compare
{
public:
    bool operator()(string a,string b)
	{
	    for(int i=0;i<a.length() && i<b.length();i++)
	    {
		if(tolower(a[i]) < tolower(b[i]))
		    return true;
		if(tolower(a[i]) > tolower(b[i]))
		    return false;
	    }
	    if(a.length()<b.length())
		return true;
	    else
		return false;
	}
};
int main()
{
	char str[1024];
	compare comp;
	while(cin.getline(str,1024))
	{
		word.clear();
		num.clear();
		if(str[0]=='.' && str[1]==0)
			break;
		for(int i=0;i<1000;i++)
			flag[i]=false;
		int count=split(str,strlen(str));
		sort(word.begin(),word.end(),comp);
		sort(num.begin(),num.end());
		int wordCount=0;
		int numCount=0;
		for(int i=0;i<count;i++)
		{
			if(i!=0)
				cout<<", ";
			if(flag[i]==true)
				cout<<num[numCount++];
			else
				cout<<word[wordCount++];
		}
		cout<<"."<<endl;
	}
	return 0;
}
