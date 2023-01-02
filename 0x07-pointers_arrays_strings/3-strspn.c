#include "main.h"
#include <stdio.h>

/**
 * _strspn - Fx that gets the length of a prefix substring
 * @s: var 1
 * @accept: var 2
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, y, j = 0;

	while (accept[i])
	{
		y = 0;
		while (s[y] != 32)
		{
			if (accept[i] == s[y])
			{
				j++;
			}
			y++;
		}
		i++;
	}
	return (j);
}
