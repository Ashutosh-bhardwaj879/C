/*2. Write a program in C to find the length of a string without using library function. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15 */
#include<stdio.h>
void main()
{
    char s[100];
    int l=0;
    printf("Enter the string : ");
    fgets(s,sizeof(s),stdin);
    while(s[l]!='\0')
    {
        l++;
    }
    printf("Length of string : %d\n",l-1);

}