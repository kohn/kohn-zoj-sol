#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
//1350
vector<int> rec;
int Min()
{
    int min=100000000;
    for(int i=0;i<rec.size();i++)
	if(rec[i]<min)
	    min=rec[i];
    return min;
}
int Max()
{
    int max=0;
    for(int i=0;i<rec.size();i++)
	if(rec[i]>max)
	    max=rec[i];
    return max;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	rec.clear();
	string str;
	cin>>str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int t;
	    cin>>t;
	    rec.push_back(t);
	}
	if(str=="Faster")
	    cout<<Min()<<endl;
	else
	    cout<<Max()<<endl;
    }
    return 0;
}
