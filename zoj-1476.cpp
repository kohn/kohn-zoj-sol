#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    while(m!=0 && n!=0)
    {
	bool flag[60];
	for(int i=0;i<60;i++)
	    flag[i]=false;
	flag[m]=true;
	for(int i=0;i<60;i++)
	{
	    m=(m*n+m)%60;
	    if(flag[m]==true)
	    {
		cout<<"Impossible"<<endl;
		break;
	    }
	    if(m==0)
	    {
		cout<<i+1<<endl;
		break;
	    }
	    flag[m]=true;
	}
	cin>>m>>n;
    }
    return 0;
}
