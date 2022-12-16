#include "main.h"

/**
 * print_line - Fx that draws a straight line
 * @n: int c
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
