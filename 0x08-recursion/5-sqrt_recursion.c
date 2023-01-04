#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Fx that returns the natural sqrt of a number
 * @n: var
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Fx that check whether it's naturat sqrt or not
 * @n: var 2
 * @i: var 3
 * Return: 0
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
