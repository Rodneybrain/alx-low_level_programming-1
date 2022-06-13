#include "main.h"
#include stdio.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;

	for (; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
