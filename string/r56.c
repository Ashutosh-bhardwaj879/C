//Program to remove last occurence of character in a string
#include<stdio.h>
#include<string.h>
void removelast(char*  , char );
void main()
{
  char s[100],ch;
  puts("Enter any string");
  fgets(s,sizeof s,stdin);
  fflush(stdin);
  ch = getchar();
  removelast(s,ch);
  puts(s);

}
void removelast(char* s,char ch)
{
    int i,length;
    for(i=0;s[i]!='\0';i++)
    {
       length  = i ;
    }
    for(i=length-1;i>=0&&ch!=s[i];i--);
    
        if(i>=0)
        {
         for(;s[i]=s[i+1];i++);
        }
}