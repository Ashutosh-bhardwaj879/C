/* 9. Write a program in C to count total number of vowel or consonant in a string. Go to the editor

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

The total number of vowel in the string is : 9 
The total number of consonant in the string is : 12 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[100];
    int l,i,vowel=0,c=0;
    printf("Input the string : ");
    fgets(str,sizeof str,stdin);
    l = strlen(str);
    for(i=0;i<=l;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
           vowel++;
        }
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            c++;
        }
    }
    printf("Vowels in string are %d\n",vowel);
    printf("Constant in string are %d\n",c);
}