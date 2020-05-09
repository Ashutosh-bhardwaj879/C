/*10. Write a program in C to find maximum occurring character in a string. Go to the editor

Test Data :
Input the string : Welcome to w3resource.com.

Expected Output :

The Highest frequency of character 'e' 
appears number of times : 4 
*/
#include<stdio.h>
void frequency(char*);
void main()
{
    char a[100];
    printf("Input the array:");
    fgets(a,sizeof a,stdin);
    frequency(a);
}
void frequency(char* a)
{
    int fc[256]={0};
    int i,max;
    //int min;
    for(i=0;a[i]!='\0';i++)//Counting frequency of each element
    {
        fc[a[i]]++;
    }
    for(i=0;i<256;i++)//Helps to find posu=ition first element where string starts
    {
     if(fc[i]!=0)
        break;
    }
    //min=i;
    max=i;// will make first element as man as well as max 
    for(i=0;i<256;i++)
    {
        if(fc[i]==0)
         continue;
       // if(fc[i]<fc[min])  
        // min=i;
        if(fc[i]>fc[max])
         max=i;
    }
    //printf("Min %c %d",min,fc[min]);
    //printf("\n");
    printf("Max character is %c and occurence is %d",max,fc[max]);
    printf("\n");
}