//1383 gougou WA
#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#define PRE 0.000001
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
	int m;
	cin>>m;
	int count=0;
	bool flag=false;
	while(m!=0)
	{
	    if(m%2==1)
	    {
		if(flag==true)
		    cout<<" ";
		flag=true;
		cout<<count;
	    }
	    count++;
	    m/=2;
	}
	if(n!=0)
	    cout<<endl;
    }
    return 0;
}
