/* C Program to Count Total Number of Words in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, totalwords;
  	totalwords = 1;
 
  	printf("\n Please Enter any String :  ");
  	fgets(str,sizeof str,stdin);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d\n", str, totalwords-1);
	
  	return 0;
}