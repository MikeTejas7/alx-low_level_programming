#include "main.h"
#include <string.h>

/**
 * _strncpy - Fx that copies a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: int n
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
