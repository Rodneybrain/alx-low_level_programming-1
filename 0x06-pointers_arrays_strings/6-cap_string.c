 #include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
  
char *cap_string(char *)
{
	int y, a;
	int jp = 48;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (y = 0; n[y] != '\0'; y++)
	{
		if (n[y] >= 'a' && n[y] <= 'z')
		{
			n[y] = n[y] - jp;
		}

		cap = 0;

		for (a = 0; a <= 12; a++)
		{
			if (n[y] == separators[a])
			{
				a = 12;
				jp = 32;
			}
		}
	}
	return (n);
}
