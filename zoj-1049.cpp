#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define PI 2*acos(0)
bool matrix[729][729];
int main()
{
    int T;
    cin>>T;
    for(int count=0;count<T;count++)
    {
	double x,y;
	cin>>x>>y;
	int ans=(x*x+y*y)*PI/100;
	cout<<"Property "<<count+1<<": This property will begin eroding in year "<<ans+1<<"."<<endl;
    }
    cout<<"END OF OUTPUT."<<endl;
    return 0;

}
