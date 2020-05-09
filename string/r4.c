//WAP to reverse words of string
//you are good
///step  1 reversse whoile string
//step 2 reverse word by word
//uoy era doog
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char reverse(char*);
void main()
{
  char a[100];
  printf("Input a string : ");
  fgets(a,sizeof a,stdin);
  reverse(a);
  printf("After reversing string \n ");
  puts(a);
}
char reverse(char* a)
{
  int  i,j,k;
  char t;
  //strrev(a); cant in linux
  for(i=j=k=0;a[i]!='\0';i++)
  {
    if(a[i]==' '||a[i+1]=='\0')
    {
      for(k=(a[i]=='\0'?i:i-1);j<k;j++,k--)
      {
        t=a[j];
        a[j]=a[k];
        a[k]=t;
      }
      j=i+1;
    }
  }
}