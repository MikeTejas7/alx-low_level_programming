#include "main.h"

/**
 *print_last_digit - Fx that print the last digit no.
 *@l: given value
 *Return: 0
 */
int print_last_digit(int l)
{
	int i;

	if (l < 0)
		i = -1 * (l % 10);
	else
		i = l % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
