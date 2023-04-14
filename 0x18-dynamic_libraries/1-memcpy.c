#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Fx that copies memory area
 * @dest: var 1
 * @src: var 2
 * @n: var 3
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
