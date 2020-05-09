//Program to find frequency of a charatcer in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[200];
    int i,count=0;
    char ch;
    printf("Enter the String :");
    fgets(a,sizeof a,stdin);
    printf("Enter the character whose frequency to determiine ");
    scanf("%c",&ch);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            count++;
        }
        else
        {
          break;
        }
    }
   printf("Frequency of %c is %d\n",ch,count); 
}
