#include <iostream>
#include <math.h>
#define PRE 0.000001
using namespace std;
int x[80];
double y[80];
double dist[80][80];
double equal(double a,double b)
{
     return fabs(a-b)<PRE;
}
int main()
{
     int n;
     cin>>n;
     int k=0;
     for(int i=0;i<12;i++)
	  for(int j=-i;j<=i;j=j+2)
	  {
	       x[k]=j;
	       y[k]=(11-i)*sqrt(3.0);
	       k++;
	  }
     for(int i=0;i<k;i++)
	  for(int j=0;j<k;j++)
	       dist[i][j]=hypot(x[i]-x[j],y[i]-y[j]);
     while(n!=0)
     {
	  int total=n*(n+1)/2;
	  char str[1024];
	  cin>>str;
	  int count=0;
	  bool flag[26];
	  for(int i=0;i<26;i++)
	       flag[i]=false;
	  for(int i=0;i<total;i++)
	  {
	       if(flag[str[i]-'a']==true)
		    continue;
	       for(int j=i+1;j<total;j++)
	       {
		    if(str[i]!=str[j])
			 continue;
		    for(int l=j+1;l<total;l++)
		    {
			 if(str[j]!=str[l])
			      continue;			
			 if(equal(dist[i][j],dist[i][l]) && equal(dist[i][j],dist[j][l]))
			 {
			      if(flag[str[i]-'a']==false)
			      {
				   flag[str[i]-'a']=true;
				   count++;
//				   goto LOOP;
			      }
			 }
		    }
	       }
	  }
//	  LOOP:	;
	  if(count==0)
	       cout<<"LOOOOOOOOSER!"<<endl;
	  else
	  {
	       for(int i=0;i<26;i++)
		    if(flag[i]==true)
		    {
			 char ch='a'+i;
			 cout<<ch;
		    }
	       cout<<endl;
	  }
	  cin>>n;
     }
     return 0;
}
