#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
double speed,weight,height;
bool Check(double s,double w,double h);
int main()
{
    cin>>speed>>weight>>height;
    bool flag;
    while(speed!=0 && weight!=0 && height!=0)
    {
        flag=false;
        if(Check(4.5,150,200))
        {
            cout<<"Wide Receiver";
            flag=true;
        }
        if(Check(6,300,500))
        {
            if(flag==true)
                cout<<" ";
            cout<<"Lineman";
            flag=true;
        }
        if(Check(5,200,300))
        {
            if(flag==true)
                cout<<" ";
            cout<<"Quarterback";
            flag=true;
        }
        if(flag==false)
            cout<<"No positions";
        cout<<endl;
        cin>>speed>>weight>>height;
    }
	return 0;
}
bool Check(double s,double w,double h)
{
    if(speed<=s && weight>=w && height >=h)
        return true;
    else
        return false;
}