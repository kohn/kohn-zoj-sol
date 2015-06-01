#include "iostream"
using namespace std;
int main()
{
    int repeat;
    cin>>repeat;
    while(repeat--)
    {
	int brain,require;
	cin>>brain>>require;
	if(brain>=require)
	    cout<<"MMM BRAINS"<<endl;
	else
	    cout<<"NO BRAINS"<<endl;
    }
    return 0;
}
