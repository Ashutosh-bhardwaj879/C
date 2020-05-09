#include <stdio.h>

int main() 
{
int n;
printf("Enter array numbers\n");
scanf("%d",&n);
int a[n],i,j,s=0;
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j]&&a[i]!=0&&a[j]!=0)
        { 
            s++;
            a[i]=0;
            a[j]=0;
        }
    }
}
printf("Result");
printf("%d",s);
return 0;
}