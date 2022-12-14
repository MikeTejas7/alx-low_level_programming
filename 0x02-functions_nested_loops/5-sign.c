#include "main.h"

/**
 *print_sign - Fx that prints the sign number
 *@n: greater than zero, is zero, is less than zero
 *Return: 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
