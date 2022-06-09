#include <stdio.h>                                                                                                               
#include "main.h"

/**                                                                                                                              
 * _isupper - a function that checks for uppercase character                                                                     
 *
 * Return: 1 if c is uppercase, 0 otherwise                                                                                      
 */ 

int _isupper(int c)
{
	char ch; 
    printf("Enter the alphabet:");
 
    scanf("%c",&ch);
 
   if(ch>=65 && ch<=90)
 
      printf("upper case");
 
    else if(ch>=97 && ch<=122)
 
 
    printf("lower case");
 
     
    else
     printf("Invalid input");
return 0;
}
