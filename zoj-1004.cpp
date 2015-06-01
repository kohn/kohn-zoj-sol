#include "stdio.h"
#define MAXLENGTH 1000
#define push(t) stack[top++]=t
#define pop() stack[--top]
char SourceWord[MAXLENGTH];
char TargetWord[MAXLENGTH];
char stack[MAXLENGTH];
int top;
void Tackle(char state[],int ptosou,int ptotar,int ptosta)
{
    int i;
    int temptop=top;
    if(TargetWord[ptotar]==0)
    {
	for(i=0;i<ptosta;i++)
	    printf("%c ",state[i]);
	printf("\n");
	return;
    }
    if(stack[top-1]!=TargetWord[ptotar])
    {
	if(SourceWord[ptosou]==0)
	    return;
	push(SourceWord[ptosou]);
	state[ptosta]='i';
	Tackle(state,ptosou+1,ptotar,ptosta+1);
	return ;
    }
    else
    {
	if(SourceWord[ptosou]!=0)
	{
    	push(SourceWord[ptosou]);
	state[ptosta]='i';
	Tackle(state,ptosou+1,ptotar,ptosta+1);
	}
	top=temptop;
	pop();
	state[ptosta]='o';
	Tackle(state,ptosou,ptotar+1,ptosta+1);
	return;
    }
}
int main()
{
    char State[MAXLENGTH*2];
    while(scanf("%s",SourceWord)!=EOF)
    {
	top=0;
	scanf("%s",TargetWord);
	push(SourceWord[0]);
	State[0]='i';
	printf("[\n");
	Tackle(State,1,0,1);
	printf("]\n");

    }
    return 0;
}

