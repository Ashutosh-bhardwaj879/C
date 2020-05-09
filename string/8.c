/* 8. Write a program in C to copy one string to another string. Go to the editor

Test Data :
Input the string : This is a string to be copied.

Expected Output :

The First string is : This is a string to be copied.
The Second string is : This is a string to be copied. 
Number of characters copied : 31 
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[100];
    char t[100];
    int l;
    printf("Input the string : ");
    fgets(s,sizeof s,stdin);
    while(s[l]!='\0')
    {
        t[l]=s[l];
        l++;
    }
    
printf("The first string is %s",s);
printf("\n");
printf("The copied string is %s",t);
printf("\n");
printf("The length of copied string is %d",l);
}
