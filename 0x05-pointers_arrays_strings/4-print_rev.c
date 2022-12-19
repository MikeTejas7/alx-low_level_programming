#include "main.h"
#include <string.h>

/**
 * print_rev - Fx that print a string in reverse
 * @s: int reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
