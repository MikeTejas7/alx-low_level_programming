#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Fx that searches a string for any of a set of bytes
 * @s: var 1
 * @accept: var 2
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[y])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
