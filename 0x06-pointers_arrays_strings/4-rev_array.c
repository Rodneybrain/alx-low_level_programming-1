#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int x, desc;

	for (x = 0; x < n; x++)
	{
		n--;
		desc = a[x];
		a[x] = a[n];
		a[n] = desc;
	}
} 
