#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
	int ip;
	cin>>ip;
	priority_queue<int,vector<int>,greater<int> > p;
	int smallcount=0;
	for(int i=0;i<n;i++)
	{
	    int iq;
	    cin>>iq;
	    if(iq<ip)
		smallcount++;
	    else
		p.push(iq);
	}
	while(!p.empty())
	{
	    int iq=p.top();
	    p.pop();
	    if(iq<=ip)
		smallcount++;
	    else
		ip+=2;
	}
	cout<<ip+smallcount<<endl;
    }
    return 0;
}
