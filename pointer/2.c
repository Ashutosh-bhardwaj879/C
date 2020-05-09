/*2. Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7fcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 */
 #include<stdio.h>
 void main()
 {
    int m;
    int* ab;
    m=29;
    printf("Address of m : %d\n",&m);
    printf("Value of m : %d\n",m);
    ab=&m;
    printf("Now ab is assigned the address of m.\n");
    printf("Address of pointer ab : %d\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    m=34;
    ab=&m;
    printf("The value of m assigned 34 now\n");
    printf("Address of pointer ab = %d\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
        *ab = 7;
    printf("The pointer variable ab is assigned with value 7\n");
    printf("Address of m = %d\n",&m);
    printf("Value of m = %d\n",*ab);
}