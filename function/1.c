/*1. Write a program in C to show the simple structure of a function.Go to the editor
Expected Output :

The total is :  11  */
#include<stdio.h>
int sum(int ,int);
void main()
{
    int a,b,t;
    printf("Enter two numbers to add: \n");
    scanf("%d %d",&a,&b);
    t = sum(a,b);
    printf("The Total is %d",t);
}
int sum(int a,int b)
{
 int sum;
 sum = a + b;
 return sum;
}