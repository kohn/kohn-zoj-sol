#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> prime;
bool Prime(int n);
int main()
{
	int n;
	int i;
	prime.push_back(2);
	prime.push_back(3);
	while(cin>>n)
	{
		for(i=2;i<=n/2;i++)
		{
			if(n/i*i==n)
				if(Prime(i)&&Prime(n/i))
				{
					cout<<"Yes"<<endl;
					break;
				}
		}
		if(i>n/2)
			cout<<"No"<<endl;
	}
}
bool Prime(int n)
{
	vector<int>::iterator itor;
	itor=find(prime.begin(),prime.end(),n);
	if(itor!=prime.end())
		return true;
	for(int i=2;i<=n/2;i++)
	{
		if(n/i*i==n)
			return false;
	}
	prime.push_back(n);
	return true;
}