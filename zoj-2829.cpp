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
int stock[100201];
void fun()
{
	int i,j;
	int count=1;
	for(i=1;i<71500;i=i+5)
	{
		j=i/5+1;
		stock[count++]=i*3;
		stock[count++]=5*(3*j-2);
		stock[count++]=3*(i+1);
		stock[count++]=3*(i+2);
		stock[count++]=5*(3*j-1);
		stock[count++]=3*(i+3);
		stock[count++]=3*(i+4);
	}
}
int main()
{
	int n;
	fun();
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",stock[n]);
	return 0;
}