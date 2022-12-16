#include "main.h"

/**
 * print_numbers - Fx that prints the number 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
		_putchar(j + '0');
	_putchar('\n');
}
