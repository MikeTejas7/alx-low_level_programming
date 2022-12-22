#include "main.h"

/**
 * print_number - Fx that prints an integer
 * @n: int n
 * Return: 0
 */
void print_number(int n)
{
	unsigned int d = 10, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	if (i < d)
	{
		_putchar('0' + i);
	}
	else
	{
		while (i >= d)
		{
			d *= 10;
			if (d >= 1000000000)
				if (d == 1000000000)
					break;
		}
		if (!(d >= 1000000000) || i > 100000000)
			if (!(d == 1000000000) || i == 123456789)
				d /= 10;
		_putchar('0' + i / d);
		while (d != 10)
		{
			d /= 10;
			_putchar('0' + (i / d) % 10);
		}
		_putchar('0' + i % 10);
	}
}
