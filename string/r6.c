//WAP to reverse words of string
//you are good
///step  1 reversse whoile string
//step 2 reverse word by word
//good are youar
#include<stdio.h>
void reverse(char*);
void main()
{
  char a[100];
  printf("Input a string : ");
  fgets(a,sizeof a,stdin);
  reverse(a);
  printf("After reversing string \n ");
  puts(a);
}
void reverse(char* a)
{
  int  i,j,k;
  char t;
  for(i=j=k=0;a[i]!='\0';i++)
  {
    if(a[i]==' '||a[i+1]=='\0')
    {
      for(k=(a[i]==' '?i-1:i);j<k;j++,k--)
      {
        t=a[j];
        a[j]=a[k];
        a[k]=t;
      }
      j=i+1;
    }
  }
}