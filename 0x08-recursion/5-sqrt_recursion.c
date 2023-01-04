#include "main.h"

/**
 * _sqrt_recursion - Fx that returns the natural sqrt of a number
 * @n: var
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (is_sqrt(n, square));
}

/**
 * is_sqrt - Fx that check whether it's naturat sqrt or not
 * @n: var 2
 * @square: var 3
 * Return: 0
 */
int is_sqrt(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (is_sqrt(n, square + 1));
	else if (square * square > n)
		return (-1);
	return (-1);
}
