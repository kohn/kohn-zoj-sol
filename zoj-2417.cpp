/*#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <deque>
#include <string.h>
#define E exp(1.0f)
#define PRE 0.0000001
using namespace std;*/#include "stdio.h"
int main()
{
	unsigned int n;
	scanf("%u",&n);
	while(n!=0)
	{
		unsigned int t=1;
		unsigned int i=1;
		while((n&i) != 1)
		{
			n=n>>1;
			t<<=1;
		}
		printf("%d\n",t);
		scanf("%u",&n);
	}
	return 0;
}