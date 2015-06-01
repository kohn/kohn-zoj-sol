#include <iostream>
#include <vector>
using namespace std;
int n,m;
int val[10];
int num[10];
int count;
void Process(int s,int remain);
int main()
{
	int c=0;
	while(cin>>n)
	{
		if(c!=0)
			cout<<endl;
		cin>>m;
		count=0;
		for(int i=0;i<m;i++)
			cin>>val[i]>>num[i];
		Process(0,n);
		cout<<count<<endl;
		c++;
	}
}
void Process(int s,int remain)
{
	if(s>=m)
		return;
	for(int i=0;i<=num[s];i++)
	{
		if(remain==i*val[s])
		{
				count++;
				return;
		}
		if(remain<i*val[s])
			return;
		Process(s+1,remain-val[s]*i);
	}
}