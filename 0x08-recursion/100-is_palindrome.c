#include "main.h"
/**
 * _strlen_recursion - Return length of string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - Compares xter
 * @s: str 1
 * @n1: var 2
 * @n2: var 3
 * Return: 0
 */
int check_pal(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + check_pal(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - Fx that detects if its a string
 * @s: var string
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
