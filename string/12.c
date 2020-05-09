//Sort a string in descending order
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,temp,l;
    char str[100];
    printf("Program to sort an array in descending order\n");
    printf("_ _ _ _ _ _ _ __ _ _ _ _ _ _ _ __ _ _ _ _ _ _ _\n");
    puts("Enter the string ");
    fgets(str,sizeof str,stdin);
    l = strlen(str);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i]<str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("String in descending is %s",str);
}