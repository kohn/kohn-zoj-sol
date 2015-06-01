#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int n,p=0;
	cin>>n;
	while(n%2==0)
	{
	    n/=2;
	    p++;
	}
	cout<<n<<" "<<p<<endl;
    }
    return 0;
}
