#include "main.h"

/**
 * print_numbers - Fx that prints the number 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
