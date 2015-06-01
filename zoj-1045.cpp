#include "iostream"
using namespace std;
int main()
{
    float fLenth;
    cin>>fLenth;
    while(fLenth>0.001)
    {
	double i=2;
	double sum=0;
	while(sum<fLenth)
	{
	    sum+=1/i;
	    i=i+1;
	}
	cout<<i-2<<" card(s)"<<endl;
	cin>>fLenth;
    }
    return 0;
}