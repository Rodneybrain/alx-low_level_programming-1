#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int qr, at, ew;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (at = 0; at <= (size - 1); at++)
		{
			for (qr = 0; qr < (size - 1) - at; qr++)
			{
				_putchar(' ');
			}
			for (ew = 0; ew <= at; ew++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
} 
