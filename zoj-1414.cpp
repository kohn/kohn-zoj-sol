#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		if(x==y)
			if(x%2==1)
				cout<<x*2-1<<endl;
			else
				cout<<x*2<<endl;
		else if(y==x-2)
		{
			if(y%2==0)
				cout<<y*2+2<<endl;
			else
				cout<<y*2+1<<endl;
		}
		else
			cout<<"No Number"<<endl;
	}
	return 0;
}