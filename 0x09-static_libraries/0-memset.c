#include "main.h"
#include <string.h>

/**
 * _memset - Fx that fills memory with a constant byte
 * @s: var 1
 * @b: var 2
 * @n: var 3
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
