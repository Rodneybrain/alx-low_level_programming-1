#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * 
 * 
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
		printf("%d, ", a[z]);
		if (z == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
