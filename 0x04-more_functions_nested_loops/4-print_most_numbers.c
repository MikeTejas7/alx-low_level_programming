#include "main.h"

/**
* print_most_numbers - Fx that prints the numbers from 0 - 9
* Return: void
*/
void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
