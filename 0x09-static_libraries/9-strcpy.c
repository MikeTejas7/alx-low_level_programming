#include "main.h"

/**
 * _strcpy - Fx that copies the string pointed
 * @dest: destination value
 * @src: source value
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
