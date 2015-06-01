#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int year;
 int k[]={3,5,8,12,20,34,57,98,170,300,536,966,1754,3210,5910,10944,20366,38064,71421,134480,254016};
  while(cin>>year && year!=0)
    {
      int generation=(year-1960)/10;
      cout<<k[generation]<<endl;
    }
  return 0;
}
