#include "main.h"
/**
 * is_prime_number - Fx that returns 1 if input int is PN
 * @n: var 1
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
/**
 * is_prime - Fx that detcts PN
 * @n: var 2
 * @c: iterator
 * Return: 0
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
