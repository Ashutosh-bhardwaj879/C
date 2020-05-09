/*1. Write a program in C to show the basic declaration of pointer. Go to the editor
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50*/       
#include<stdio.h> 
void main()
{
 int m =10,n,o;
 int* z;
 z=&m;
 printf("Pointer : Show the Basic Declaration of pointer : \n");
 printf("--------------------------------------------------\n");
 printf("Here is m=10,n and o are two integer variable and *z is an inetger pointer\n");
 printf("z stores the address of m = %d\n",z);
 printf("&m store the address of m = %d\n",&m);
 printf("&n store the  address of n =%d\n",&n);
 printf("&o store the address of o = %d\n",&o);
 printf("&z store the address of z = %d\n",&z);
 printf("\n");
}
                                                 
