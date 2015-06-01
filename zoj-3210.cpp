#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//3210
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int n;
	int in[100];
	int out[100];
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>in[i];
	for(int j=0;j<n;j++)
	    cin>>out[j];

	int stack=true;
	int queue=true;
	for(int i=0;i<n;i++)
	    if(in[i]!=out[i])
	    {
		queue=false;
		break;
	    }
	for(int i=0;i<n;i++)
	    if(in[i]!=out[n-1-i])
	    {
		stack=false;
		break;
	    }
	if(stack==false && queue==false)
	    cout<<"neither"<<endl;
	else if(stack==false && queue==true)
	    cout<<"queue"<<endl;
	else if(stack==true && queue==false)
	    cout<<"stack"<<endl;
	else
	    cout<<"both"<<endl;
    }
    return 0;
}
