/*6. Write a program in C to compare two string without using string library functions. Go to the editor

Test Data :
Input the 1st string : This is first string
Input the 2nd string : This is first string

Expected Output :

The length of both strings are equal and
also both strings are equal.*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(char*,char*);
int main()
{
  char a[100];
  char b[100];
  printf("Enter the first Strings : ");
  fgets(a,sizeof a,stdin);
  printf("Enter the second string : ");
  fgets(b,sizeof b,stdin);
  if(compare(a,b)==0)
    puts("Strings are equal");
  if(compare(a,b)!=0)
   puts("Strings are not equal");

}
int compare(char a[],char b[])
{
    int i;
    for(i=0;a[i]==b[i]&&a[i]&&b[i];i++)
    {
     return(a[i]-b[i]);
    } 
}

