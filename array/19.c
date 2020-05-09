/* 19. Write a program in C for addition of two Matrices of same size. Go to the editor
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The Addition of two matrix is :

6 8
10 12  */
#include<stdio.h>
void main()
{
int i,j,n,a[20][20],b[20][20],c[20][20];
printf("Input the size of square matrix (less than 2) : ");
scanf("%d",&n);
printf("\n");
printf("Input elements in first matrix\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Element[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("\n");
printf("Input elements in second matrix\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Element[%d][%d] : ",i,j);
        scanf("%d",&b[i][j]);
    }
}
printf("\n");
printf("The First Matrix is \n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("The Second Matrix is \n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d  ",b[i][j]);
    }
    printf("\n");
}
printf("\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j] = a[i][j] + b[i][j];
    }
}
printf("The Addition of two matrix is : \n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d  ",c[i][j]);
    }
    printf("\n");
}
}