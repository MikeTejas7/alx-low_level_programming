#include "main.h"

/**
 * _islower - Fx that checks for lowercase xter
 * @c: to check if it is a lowercase
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
