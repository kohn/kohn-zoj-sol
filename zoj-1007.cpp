#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
//3202
int main()
{
    for(double a=0.000;a<=2.000;a+=0.001)
    {
	double sum=0;
	for(double k=1;k<10000;k++)
	    sum+=(1-a)/(k*(k+1)*(k+a));
	sum+=(1-a)/(2*10000*10000)+1.0;
	printf("%5.3f %16.12f\n",a,sum);
    }
    
}
