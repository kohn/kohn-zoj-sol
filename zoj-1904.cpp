#include "stdio.h"
#include "math.h"
int main()
{
    double D,V;
    double d,temp;
    scanf("%lf%lf",&D,&V);
    while(!(D==0&&V==0))
    {
	temp=pow(D,3)-6*V/3.1415926;
	d=pow(temp,1.0/3);
	printf("%.3lf\n",d);
	scanf("%lf%lf",&D,&V);
    }
    return 0;
}





