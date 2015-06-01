#include "iostream"
#include "string"
#include "vector"
#include "math.h"
#include "algorithm"
using namespace std;
vector<long long> v;
bool flag=false;
void Cal(int n1,int n2,int n3,int n4)
{
  long long t1=pow(2,n1);
  long long t2=pow(3,n2);
  long long t3=pow(5,n3);
  long long t4=pow(7,n4);
  if(t1>2000000000L || t2>2000000000L || t3>2000000000L || t4>2000000000L)
    return ;
  if(t1*t2>2000000000L || t1*t3>2000000000L || t1*t4>2000000000L || t2*t3>2000000000L || t2*t4>2000000000L || t3*t4>2000000000L)
    return;
  if(t1*t2*t3>2000000000L || t1*t2*t4>2000000000L || t1*t3*t4>2000000000L || t2*t3*t4>2000000000L)
    return;
  long long t=t1*t2*t3*t4;
  if(t>2000000000L)
    return;
  v.push_back(t);
}
void fun()
{
  for(int i=0;i<32;i++)
    for(int j=0;j<21;j++)
      for(int k=0;k<=14;k++)
	for(int l=0;l<=12;l++)
	  Cal(i,j,k,l);
  sort(v.begin(),v.end());
}
int main()
{
  int n;
  fun();
  cin>>n;
  while(n!=0)
    {
      int t=n%100;
      string str;
      switch(t%10)
	{
	case 1:
	  str="st";break;
	case 2:str="nd";break;
	case 3:str="rd";break;
	default:str="th";break;
	}
      if(t/10==1)
	str="th";
      cout<<"The "<<n<<str<<" humble number is "<<v[n-1]<<"."<<endl;
      cin>>n;
    }
  return 0;
}
