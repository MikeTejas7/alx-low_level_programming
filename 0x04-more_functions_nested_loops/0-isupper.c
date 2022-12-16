#include "main.h"

/**
 * _isupper - Fx that checks for uppercase xter
 * @c: int c
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
