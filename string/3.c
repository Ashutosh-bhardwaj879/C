/*3. Write a program in C to separate the individual characters from a string. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c  o  m 
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  char s[50];
  int l=0;
  printf("Input the string : ");
  fgets(s,sizeof(s),stdin);
  while(s[l]!='\0')
  {
    printf("%c   ",s[l]);
    l++;
  }
  printf("\n");
}