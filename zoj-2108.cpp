#include "stdio.h"
int main()
{
    int n,i,time;
    int a[101];
    scanf("%d",&n);
    while(n)
    {
	time=n*5;
	a[0]=0;
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	    if(a[i]>=a[i-1])
		time=time+6*(a[i]-a[i-1]);
	    else
		if(a[i]<a[i-1])
		    time=time+4*(a[i-1]-a[i]);

	}
	printf("%d\n",time);
	scanf("%d",&n);
    }
    return 0;
}