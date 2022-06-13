#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * cend is to first count to end, n is to count back
 * 
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int cend = 0;
	int x, w;

	for (x = 0; s[x] != '\0'; x++)
	{
		fcounter++;
	}

	for (w = (cend - 1); w >= 0; w--)
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}
