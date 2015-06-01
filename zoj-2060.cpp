#include <iostream>
using namespace std;
int f[1000000];
void fun()
{
    for(int i=2;i<1000000;i++)
	f[i]=(f[i-1]+f[i-2])%3;
}
int main()
{
    f[0]=1;
    f[1]=2;
    fun();
    int n;
    while(cin>>n)
    {
	if(f[n]==0)
	    cout<<"yes"<<endl;
	else
	    cout<<"no"<<endl;
    }
    return 0;
}
