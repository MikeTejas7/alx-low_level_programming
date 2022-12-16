#include "main.h"

/**
 * print_diagonal - Fx that draws a diagonal line on the terminal
 * @n: int c
 * Return: 0
 */
void print_diagonal(int n)
{
	int = 1;

	if (n > 0)
	{
		_putchar(92);

		while (i < n)
		{
			int count = 0;

			_putchar('\n');
			while (count < i)
			{
				_putchar(' ');
				count++;
			}
			_putchar(92);
			i++;
		}
	}
	_putchar('\n');
}
