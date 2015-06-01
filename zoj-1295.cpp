#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#include <string.h>
#define E exp(1.0f)
#define PRE 0.0000001
using namespace std;
int main()
{
	int t;
	while(cin>>t)
	{
		getchar();
		for(int i=0;i<t;i++)
		{
			char str[81];
			cin.getline(str,80);
			int length=strlen(str);
			for(int i=length-1;i>=0;i--)
				cout<<str[i];
			cout<<endl;
		}
	}
	return 0;
}