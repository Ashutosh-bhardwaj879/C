/* 4. Write a program in C to print individual characters of string in reverse order. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int l,t,i;
    char s[100];
    printf("Input the string : ");
    fgets(s,sizeof(s),stdin);
    l=strlen(s);
    for(i=l-1;i>=0;i--)
    {
        printf("%c  ",s[i]);
    }
    printf("\n");
}