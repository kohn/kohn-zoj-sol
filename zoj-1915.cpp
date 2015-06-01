#include "iostream"
#include "vector"
#include "iomanip"
#include "stdio.h"
using namespace std;
int main()
{
    int C;
    int i;
    int N;
    cin>>C;
    while(C--)
    {
	cin>>N;
	vector<int> vc;
	int sum=0;
	for(i=0;i<N;i++)
	{
	    int gra;
	    cin>>gra;
	    vc.push_back(gra);
	    sum+=gra;
	}
	double ave=(double)sum/N;
	vector<int>::iterator it;
	int n=0;
	for(it=vc.begin();it!=vc.end();it++)
	{
	    if(*it>ave)
		n++;
	}
	printf("%.3lf%%\n",n*100.0/N);
    }
    return 0;
}