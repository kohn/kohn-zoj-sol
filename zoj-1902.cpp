#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct word
{
    char string[17];
    int money;
    struct word *next;
};
int Hashing(char target[17])
{
    int i;
    int Sum_Value=0;
    for(i=0;target[i]!=0;i++)
    {
	Sum_Value+=target[i]-'a';
    }
    return Sum_Value%100;
}


struct word *NewWord(char target[17],int m)
{
    struct word *pWord=(struct word*)malloc(sizeof(struct word));
    strcpy(pWord->string,target);
    pWord->money=m;
    pWord->next=NULL;
    return pWord;
}
int Search(struct word *t,char target[17])
{
    int value=0;
    struct word *pWord=t;
    while(pWord!=NULL)
    {
	if(strcmp(t->string,target)==0)
	{
	    return t->money;
	}
	pWord=pWord->next;
    }
    return 0;
}
int main()
{
    int m,n;
    int i;
    struct word *word_in_dictionary[100],*temp;
    char tempword[17];
    int hash,tempmoney,sum_money;
    memset(word_in_dictionary,NULL,sizeof(word_in_dictionary));
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
	scanf("%s%d",tempword,&tempmoney);
	hash=Hashing(tempword);/*get hashing valus of tempword*/
	temp=NewWord(tempword,tempmoney);/*make a node and insert it into hashing table*/
	temp->next=word_in_dictionary[hash];
	word_in_dictionary[hash]=temp;
    }
    for(i=0;i<n;i++)
    {
	sum_money=0;
	scanf("%s",tempword);
	while(!(tempword[0]=='.'&&tempword[1]==0))
	{
	    hash=Hashing(tempword);
	    sum_money+=Search(word_in_dictionary[hash],tempword);
	    scanf("%s",tempword);
	}
	printf("%d\n",sum_money);
    }
    return 0;
}
