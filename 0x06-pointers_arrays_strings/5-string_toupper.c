 #include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @n: input string
 * Return: capitialized string
 */
char *string_toupper(char *)
{
	int y;

	for (y = 0; n[y] != '\0'; y++)
	{
		if (n[y] >= 'a' && n[y] <= 'z')
			n[y] = n[y] - 32;
	}
	return (n);
}
