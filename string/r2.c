//minimum occuring character
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void frequency(char* a);
void main()
{
  char a[100];
  printf("Enter the string : ");
  fgets(a,sizeof a,stdin);
  frequency(a);
}
void frequency(char* a)
{
    int fc[256]={0};
    int i;
    int min;
    //frequency increasing of each character in fc array
    for(i=0;a[i]!='\0';i++)
      fc[a[i]]++;
    //
    for(i=0;i<256;i++)
    {
        
        if(fc[i]!=0)
          break;
    }
    min = i;
    for(i=0;i<256;i++)
    {   
        if(fc[i]==0)
         continue;
        if(fc[i]<fc[min])
        {
            min=i;
        }
    }
    printf("Minimum occuring character %c is %d times",min,fc[min]);
}