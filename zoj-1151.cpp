#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  for(int l=0;l<N;l++)
    {
	int n;
	if(l!=0)
	    cout<<endl;
	cin>>n;
	  getchar();
      for(int i=0;i<n;i++)
	{
	  char str[1024];
	  gets(str);
	  char *p=strtok(str," ");
	  int count=0;
	  while(p!=NULL)
	    {
		if(count!=0)
		    cout<<" ";
		count=1;
	      for(int k=strlen(p)-1;k>=0;k--)
		  cout<<p[k];
	      p=strtok(NULL," ");
	    }
	  cout<<endl;
	}
    }
  return 0;
}
