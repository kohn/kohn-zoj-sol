#include <iostream>
#include <string>
using namespace std;
int Node[2010];
int flag[2010];
bool Incon;
int Find(int a)
{
    if(Node[a]<0)
	return a;
    Node[a]=Find(Node[a]);
    return Node[a];
}
void setunion(int a,int b)
{
    int indexa=Find(a);
    int indexb=Find(b);
	if(indexa==indexb)
		return;
    if(Node[indexa]<Node[indexb])
	Node[indexb]=indexa;
    else
	if(Node[indexa]>Node[indexb])
	    Node[indexa]=indexb;
	else
	{
	    Node[indexa]=indexb;
	    Node[indexb]--;
	}
}
int DealSet1(int c,int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
	if(Find(i)==Find(c))
	{
	    flag[i]=true;
	    sum++;
	}
    }
    return sum;
}
int DealSet(int c,int n)
{
    if(Find(c)==Find(n+c))
	{
		Incon=true;
	return 0;
	}
    int sum1=DealSet1(c,n);
    int sum2=DealSet1(c+n,n);
    if(sum1>sum2)
	return sum1;
    else
	return sum2;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
		Incon=false;
	for(int i=0;i<2010;i++)
	    Node[i]=-1;
	for(int i=1;i<=n;i++)
	{
	    string str,boolean;
	    int index;
	    cin>>str>>index>>str>>boolean;
	    int x=(boolean=="true."?index:(index+n));
	    setunion(i,x);
	    setunion(i+n,(boolean=="true."?index+n:index));
	}
	for(int i=1;i<=n;i++)
	    flag[i]=false;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
	    if(flag[i]==false)
		{
			sum+=DealSet(i,n);
			if(Incon==true)
			{
				sum==0;
				break;
			}
		}
	}
	if(sum==0)
		cout<<"Inconsistent"<<endl;
	else
		cout<<sum<<endl;
	cin>>n;
    }
    return 0;
}