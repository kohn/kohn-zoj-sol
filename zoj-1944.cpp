#include "stdio.h"
#include "string.h"
struct node
{
  char ch;
  node *left;
  node *right;
}n[26];
node *fun(char s1[],char s2[])
{
  int i;
  char str[2][28];
  if(strlen(s1)==1)
	  return &n[s1[0]-'A'];
  if(strlen(s1)==0)
	  return NULL;
  for(i=0;s2[i]!=s1[0];i++)
    str[0][i]=s2[i];
  str[0][i++]='\0';

  int t=0;
  for(;s2[i]!='\0';i++)
    str[1][t++]=s2[i];
  str[1][t]='\0';

  char temp[28];
  for(i=0;i<strlen(str[0]);i++)
    temp[i]=s1[i+1];
  temp[i]='\0';
  n[s1[0]-'A'].left=fun(temp,str[0]);

  for(i=0;i<strlen(str[1]);i++)
    temp[i]=s1[i+strlen(str[0])+1];
  temp[i]='\0';
  n[s1[0]-'A'].right=fun(temp,str[1]);

  return &n[s1[0]-'A'];
}
void Print(node *root)
{
  if(root==NULL)
    return;
  Print(root->left);
  Print(root->right);
  printf("%c",root->ch);
}
int main()
{
  char str1[28],str2[28];
  int i=0;
  while(scanf("%s%s",str1,str2)!=EOF)
    {
      for(i=0;i<26;i++)
	{
	  n[i].ch='A'+i;
	  n[i].left=n[i].right=NULL;
	}
      node *temp=fun(str1,str2);
      Print(temp);
	  printf("\n");
    }

  return 0;
}