#include "main.h"

/**
 * _strncat - Fx that conc two strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: int n
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + j) == '\0' || j == n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
