#include "holberton.h"

/**
 * rev_string - a function that reverses a string
 * 
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int cend = 0;
	int x;

	while (s[cend] != '\0')
		cend++;

	for (x = 0; x < cend; x++)
	{
		cend--;
		rev = s[x];
		s[x] = s[cend];
		s[cend] = rev;
	}
}
