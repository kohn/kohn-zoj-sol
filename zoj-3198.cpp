#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//3202
bool Find(int &from,int set[],int data,int all)
{
    for(;from<all;from++)
    {
	if(set[from]>data)
	    return false;
	if(set[from]==data)
	    return true;
    }
    return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int set1[100000];
	int n1,n2;
	int temp;
	cin>>n1;
	for(int i=0;i<n1;i++)
	    cin>>set1[i];
	cin>>n2;
	int count=0;
	int from=0;
	for(int i=0;i<n2;i++)
	{
	    cin>>temp;
	    if(Find(from,set1,temp,n1))	
		count++;
	}
	cout<<count<<endl;

    }
    return 0;
}
