#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    while( cin>>n )  
    {  
        int sum=0;  
        for(int i=n+1;i>=2;i--)
        {  
            if( (n+2-i)%2==0 ) sum+=(i-1)*i;  
            else sum+=(i-1)*i/2;  
        }  
        cout<<sum<<endl;  
    }  
    return 0;
}
