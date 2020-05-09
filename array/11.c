/* 11. Write a program in C to sort elements of array in ascending order. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9 */
#include<stdio.h>
void main()
{
    int a[20],n,i,j,temp;
    printf("Input the size of the array : ");
    scanf("%d",&n);
    printf("\n");
    printf("Input %d elements in the array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element %d :  ",i);
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
   {
       if(a[i]>a[j])
       {
           temp = a[i];
           a[i]=a[j];
           a[j]=temp;
       }
   }
   }
   printf("Elements of array in ascending order are : \n");
   for(i=0;i<n;i++)
   {
     printf("%d ",a[i]);
   }

}