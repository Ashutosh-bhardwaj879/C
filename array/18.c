/*18. Write a program in C for a 2D array of size 3x3 and print the matrix. Go to the editor
Test Data :
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :

1 2 3
4 5 6
7 8 9 */
#include<stdio.h>
void main()
{
    int a[20][20],i,j,r,c;
    printf("Input row size : ");
    scanf("%d",&r);
    printf("\n");
    printf("Input column size : ");
    scanf("%d",&c);
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         printf("Element[%d][%d] : ",i,j);
         scanf("%d",&a[i][j]);   
        }
    }
    printf("The  3*3 Matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  " ,a[i][j]);
        }
        printf("\n");

    }
}