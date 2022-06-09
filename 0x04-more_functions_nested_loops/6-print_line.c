#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * 
 * Return: a straight line
 */
void print_line(int n)
{
	int zf;

	if (w <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (zf = 1; zf <= w; zf++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
} 
