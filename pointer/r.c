#include "stdio.h"
int main()
{ 
    int n;
scanf("%d",&n);

char* a[9]={"one","two","three","four","five","six","seven","eight","nine"};
//'*' for long string in the array

if(n>9){ 
    printf("Greater than 9");
}
else
{
   puts(a[n-1]);
}
}


