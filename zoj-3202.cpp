#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//3202
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	int n;
	int price[100];
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>price[i];
	int index=0;
	for(int i=0;i<n;i++)
	    if(price[i]>price[index])
		index=i;
	int second=0;
	for(int i=0;i<n;i++)
	    if(price[i]<price[index] && price[i]>second)
		second=price[i];
	cout<<index+1<<" "<<second<<endl;
    }
    return 0;
}
