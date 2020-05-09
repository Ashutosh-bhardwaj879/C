/*15. Write a program in C to delete an element at desired position from an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5*/
#include<stdio.h>
void main()
{
    int a[20],i,n,pos;
    printf("Inout the size of array : ");
    scanf("%d",&n);
    printf("\n");
    printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }

    printf("Before Deleltion\n");
    printf("The list  : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("Input the position where to delete : ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
   printf("\n");
   printf("After Deleltion\n");
   printf("The List :");
   for(i=0;i<n-1;i++)
   {
       printf("%d  ",a[i]);
   }    
}
