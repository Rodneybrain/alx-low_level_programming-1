#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * 
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int er, qt;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (er = 1; er <= size; er++)
		{
			_putchar('#');
			for (qt = 2; qt <= size; qt++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
} 
