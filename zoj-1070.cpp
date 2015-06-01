#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    double VS,R,C;
    int T;
    cin>>VS>>R>>C;
    cin>>T;
    while(T--)
    {
	double W;
	cin>>W;
	printf("%.3lf\n",VS*R*C*W/sqrt(R*R*C*C*W*W+1));
    }
    return 0;
}
