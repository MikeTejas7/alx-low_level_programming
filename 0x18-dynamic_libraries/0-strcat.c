#include "main.h"

/**
 * _strcat - Fx that conc. two string
 * @dest: String overwiting the terminating null byte
 * @src: Fx appends strings to the dest
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int dec = 0, i;

	while (dest[dec])
		dec++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[dec] = src[i];
		dec += 1;
	}
	dest[dec] = '\0';
	return (dest);
}
