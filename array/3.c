/*Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345*/

#include<stdio.h>
void main()
{
    int i,n,sum=0,t=1;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum = sum + t;
       printf("%d   ",t);
       t=10*t+1;
    }
    printf("\nThe Sum of %d terms is : %d\n",n,sum);

}