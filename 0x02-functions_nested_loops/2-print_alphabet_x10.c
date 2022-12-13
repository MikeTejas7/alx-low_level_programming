#include "main.h"

/**
 *print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int l;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

	_putchar('\n');
	}

}
