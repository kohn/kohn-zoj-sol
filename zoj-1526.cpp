#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
	int m;
	cin>>m;
	double count=1;
	for(int i=1;i<=m;i++)
	    count+=log10(i);
	cout<<(int)count<<endl;
    }
    return 0;
}
