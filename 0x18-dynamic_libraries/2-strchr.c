#include "main.h"
#include <stdio.h>

/**
 * _strchr - Fx that locates a xter in a string
 * @s: var 1
 * @c: var 2
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
