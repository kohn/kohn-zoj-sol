//zoj 1426
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
struct Line
{
    int x;
    int y;
    int xx;
    int yy;
}vline[110],hline[110];
bool hasPoint(int v,int h)
{
    if(vline[v].x>=hline[h].x && vline[v].x<=hline[h].xx)
	if(hline[h].y>=vline[v].y && hline[h].y<=vline[v].yy)
	    return true;
    return false;
}
int CalRectangles(int vCount,int hCount)
{
    int i,j,k,l;
    int sum=0;
    for(i=0;i<vCount;i++)
	for(j=0;j<hCount;j++)
	{
	    if(hasPoint(i,j))
	    {
		for(k=i+1;k<vCount;k++)
		    if(hasPoint(k,j))
		    {
			for(l=j+1;l<hCount;l++)
			    if(hasPoint(i,l) && hasPoint(k,l))
				sum++;
		    }
	    }
	}
    return sum;
}
int main()
{
    int M;
    int t;
    int x,y,xx,yy;
    cin>>M;
    while(M--)
    {
	int N;
	int vCount=0,hCount=0;
	cin>>N;
	for(int i=0;i<N;i++)
	{
	    cin>> x >> y >> xx >> yy;
	    if(x==xx)//ÊúÏß
	    {
		vline[vCount].x=vline[vCount].xx=x;
		if(y>yy)
		{
		    vline[vCount].y=yy;
		    vline[vCount].yy=y;
		}
		else
		{
		    vline[vCount].y=y;
		    vline[vCount].yy=yy;
		}
		vCount++;
	    }
	    else
	    {
		hline[hCount].y=hline[hCount].yy=y;
		if(x>xx)
		{
		    hline[hCount].x=xx;
		    hline[hCount].xx=x;
		}
		else
		{
		    hline[hCount].x=x;
		    hline[hCount].xx=xx;
		}
		hCount++;
	    }
	}
	cout<<CalRectangles(vCount,hCount)<<endl;
    }
    return 0;
}
