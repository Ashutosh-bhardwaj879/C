//WAP to convert lowercase to uppercase in a string
#include<stdio.h>
char* uppertolower(char* );
void main()
{
  char str[100]="string@";
  printf("%s",uppertolower(str));
  printf("%s",str);
}
char* uppertolower(char* str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' || str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
}