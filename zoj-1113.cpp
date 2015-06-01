#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
using namespace std;
long long factorial(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
	res*=i;
    return res;
}
double Cal(int n)
{
    double sum=0;
    for(int i=0;i<=n;i++)
	sum+=(double)1/factorial(i);
    return sum;
 }
 int main()
 {
     cout<<"n e"<<endl<<"- -----------"<<endl;
     cout<<"0 1"<<endl<<"1 2"<<endl<<"2 2.5"<<endl;
    for(int i=3;i<=9;i++)
	printf("%d %.9lf\n",i,Cal(i));
    return 0;
}
