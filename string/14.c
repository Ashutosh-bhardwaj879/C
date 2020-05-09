//WAP to replace old character of any string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
void replace(char* , char ,char);
void main()
{
  char s[100],old,new;
  puts("Enter a string");
  fgets(s,sizeof s,stdin);
  old = getchar();
  fflush(stdin);
  new = getchar();
  //printf("Enter character to replace\n");
  //scanf("%c",&old);
  //printf("Enter character to replace with\n");
  //scanf("%c",&new);
  replace(s,old,new);
  puts(s);
}
void replace(char* s,char old,char new)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==old)
        {
            s[i] = new;
            //break;
        }
    }

}