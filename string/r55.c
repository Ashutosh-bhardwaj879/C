//Program to remove firsst occurence of a character in a string
#include<stdio.h>
#include<string.h>\
void removefirst(char* s,char ch);
void main()
{
  char s[100],ch;
  puts("Enter any string");
  fgets(s,sizeof s,stdin);
  fflush(stdin);
  ch = getchar();
  removefirst(s,ch);
  puts(s);
}
void removefirst(char* s,char ch)
{
  int i;
  for(i=0;s[i]!='\0'&&ch!=s[i];i++);
 {
  if(s[i])
   {
    for( ; s[i]=s[i+1];i++);
   }
 }
} 