/* 4. Write a program in C to add two numbers using pointers. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
 */
#include<stdio.h>
void main()
{
    int a,b,sum;
    int* p,*q;
    

    printf("Input the first nnumber : \n");
    scanf("%d",&a);
    printf("Input the second number :  \n");
    scanf("%d",&b);
     p = &a;
    q = &b;
    sum = *p + *q;  
   
    
    printf("The Sum of entered number is : %d\n\n",sum);
}