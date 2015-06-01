#include <iostream>
#include "stdio.h"
#include "math.h"
using namespace std;
struct Complex
{
    double real;
    double imaginary;
};
void calculate(Complex complex[2][16],double p,int count)
{
    double sum=0;
    for(int i=0;i<count;i++)
    {
	double t1=complex[0][i].real-complex[1][i].real;
	double t2=complex[0][i].imaginary-complex[1][i].imaginary;
	sum+=pow(sqrt(pow(t1,2)+pow(t2,2)),p);
    }
    //cout<<pow(sum,1.0/p)<<endl;
    printf("%.8lf\n",pow(sum,1.0/p));
    return;
}
int main()
{
    char ch;
    Complex complex[2][16];
    int i=0;
    int k=0;
    while((scanf("%c",&ch)!=EOF))
    {
	if(ch=='(')
	{
flag:cin>>complex[k][i].real>>ch>>complex[k][i].imaginary; 
	    i++;
	}
	else
	    if(ch==')')
	    {
		if(k==0)
		{
		    scanf("%c",&ch);
		    if(ch=='\n')
		    {
			k++;
			i=0;
			continue;
		    }
		    else
			if(ch=='(')
			    goto flag;
		
		}
		else 
		    if(k==1)
		    {
			scanf("%c",&ch);
			if(ch=='\n')
			{
			    double p;
			    cin>>p;
			    calculate(complex,p,i);
			    k=0;
			    i=0;
			    continue;
			}
			else
			    if(ch=='(')
				goto flag;
		    }
			
		continue;
	    }
    }
    return 0;
}