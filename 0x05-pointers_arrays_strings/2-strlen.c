#include "main.h"                                                                                                                
#include <stdio.h>                                                                                                               
                                                                                                                                 
/**                                                                                                                              
 * strlen - a function that returns the length of a string
 *
 * Return: length of the input string
 */

int _strlen(char *s)
{
	int x = 1, sum = 0;
	char wp = s[0];

	while (wp != '\0')
	{
		sum++;
		wp = s[i++];
	}
	return (sum);
}
