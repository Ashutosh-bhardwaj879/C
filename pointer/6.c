/*6. Write a program in C to find the maximum number between two numbers using a pointer. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.  
*/
#include<stdio.h>
void main()
{
    int a,b;
    int* p;
    int* q;
    p = &a;
    q = &b;
    printf("Input the first number : ");
    scanf("%d",p);
    printf("\n");
    printf("Input the second number : ");
    scanf("%d",q);
    
    if( *p>*q)
    {
        printf("%d is greater",*p);
    }
    else
    {
        printf("%d is greater",*q);
    }

}