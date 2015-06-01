w#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
	if(n%2==0 || n==1)
	    cout<<"2^? mod "<<n<<" = 1"<<endl;
	else
	{
	    int mul=1,count=0;
	    while(1)
	    {
		mul=mul*2;
		mul%=n;
		count++;
		if(mul==1)
		    break;
	    }
	    cout<<"2^"<<count<<" mod "<<n<<" = 1"<<endl;
	}
    }
    return 0;
}
