/*11.Write a C program to sort a string array in ascending order. Go to the editor

Test Data :
Input the string : w3resource

Expected Output :

After sorting the string appears like : 
3ceeorrsuw 
*/
#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,l,temp;
  char str[100];
  puts("Enter the string");
  fgets(str,sizeof str,stdin);
  l = strlen(str);
  for(i=0;i<l-1;i++)
  {
    for(j=i+1;j<l;j++)
    {
      if(str[i]>str[j])
      {
        temp  = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
printf("The sorted string is %s",str);
printf("\n\n");
}