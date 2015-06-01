#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//3202
int main()
{
    char str[1024];
    while(cin.getline(str,1024))
    {
	int z=0;
	int o=0;
	int j=0;
	int c7=0;
	for(int i=0;str[i]!=0;i++)
	    switch(str[i])
	    {
	    case 'Z':z++;break;
	    case 'O':o++;break;
	    case 'J':j++;break;
	    case '7':c7++;break;
	    default:break;
	    }
	for(int i=0;i<z;i++)
	    cout<<'Z';
	for(int i=0;i<o;i++)
	    cout<<'O';
	for(int i=0;i<j;i++)
	    cout<<'J';
	for(int i=0;i<c7;i++)
	    cout<<'7';
	for(int i=0;str[i]!=0;i++)
	    if(str[i]!='Z' && str[i]!='O' && str[i]!='J' && str[i]!='7')
		cout<<str[i];
	cout<<endl;
    }
    return 0;
}
