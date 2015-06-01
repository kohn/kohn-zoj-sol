#include <iostream>
using namespace std;
int compare(int state[],int ToCompare[],int length);
int main()
{
	int num;
	int i;
	while(cin>>num)
	{
		int state[10000];
		for(i=0;i<num;i++)
			cin>>state[i];

		int count1=0;
		int ToCompare1[10]={1,0,1,0,1,0,1,0,1,0};
		for(i=0;i<num/10;i++)
			count1+=compare(&state[i*10],ToCompare1,10);
		count1+=compare(&state[i*10],ToCompare1,num%10);

		int count2=0;
		int ToCompare2[10]={0,1,0,1,0,1,0,1,0,1};
		for(i=0;i<num/10;i++)
			count2+=compare(&state[i*10],ToCompare2,10);
		count2+=compare(&state[i*10],ToCompare2,num%10);
		cout<<min(count1,count2)<<endl;
	}
	return 0;
}
int compare(int state[],int ToCompare[],int length)
{
	int count=0;
	for(int i=0;i<length;i++)
	{
		if(state[i]!=ToCompare[i])
			count++;
	}
	return count;
}