/*2. Write a program in C to find the square of any number using the function. Go to the editor
Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00*/
#include<stdio.h>
int square(int);
void main()
{
    int a,t;
    printf("Input any number to square : ");
    scanf("%d",&a);
    t = square(a);
    printf("The square of %d is %d\n",a,t);
}
int square(int a)
{
  int sq;
  sq = a*a;
  return sq;
}