#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, wp;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (wp = 0; wp < n; wp++)
	{
		dest[a + wp] = src[wp];
		if (src[wp] == '\0')
			wp = n;
	}

	return (dest);
}

