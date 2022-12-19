#include "main.h"
#include <string.h>

/**
 * puts2 - Fx that prints every other xter string
 * @str: input string
 * Return: 0
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
