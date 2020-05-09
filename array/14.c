/*14. Write a program in C to insert New value in the array (unsorted list ). Go to the editor
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10 */
#include<stdio.h>
void main()
{
    int a[20],i,n,pos,val;
    printf("Input the size of array : ");
    scanf("%d",&n);
    printf("\n");
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	}
    printf("Before Insertion\n");
    printf("The list  : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("Input the position where to insert : ");
    scanf("%d",&pos);
    printf("\n");
    printf("Input the element to insert : ");
    scanf("%d",&val);
    printf("\n");
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
        a[pos-1]=val;
    printf("After deletion\n ");
    printf("The array is ");
    for(i=0;i<=n;i++)
    {
        printf("%d  ",a[i]);
    }
    
}
