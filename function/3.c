/*3. Write a program in C to swap two numbers using function. Go to the editor
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Out"put :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2 */

#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter two numbers to swap \n");
    scanf("%d\n%d",&a,&b);
    printf("Numbers before swap %d  %d \n",a,b);
    swap(&a,&b);
    printf("Numbers after swap  %d  %d\n",a,b);
}
void swap(int* x,int* y)
{
  int temp;
  temp  = *x;
  *x = *y;
  *y = temp;
}