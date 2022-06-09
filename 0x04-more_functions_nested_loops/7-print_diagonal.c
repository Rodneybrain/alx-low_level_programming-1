#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * 
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int zf, q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (zf = 1; zf <= n; zf++)
		{
			for (q = 1; q < zf; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
} 
