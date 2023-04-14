#include "main.h"

/**
 * _puts - Fx that prints a string
 * @str: int strings
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
