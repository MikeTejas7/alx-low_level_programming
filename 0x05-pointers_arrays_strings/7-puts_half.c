#include "main.h"
#include <string.h>

/**
 * puts_half - fx that prints half of a string
 * @str: char string
 * Return: 0
 */
void puts_half(char *str)
{
	int x, y, z;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (z = y; z < x; z++)
		_putchar(str[z]);
	_putchar('\n');
}
