
    /* C Program to Count Total Duplicate Elements in an Array */
 
#include <stdio.h>
 
int main()
{
	int arr[10], i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
                break;
				
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	return 0;
} 
      /* 
    int main()  
    {  
        //Initialize array   
        int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3, 2};   
          
        //Calculate length of array arr  
        int length = sizeof(arr)/sizeof(arr[0]);  
          
        printf("Duplicate elements in given array: \n");  
        //Searches for duplicate element  
        for(int i = 0; i < length; i++) {  
            for(int j = i + 1; j < length; j++) {  
                if(arr[i] == arr[j])  
                    printf("%d\n", arr[j]);  
            }  
        }  
        return 0;  
    }  */