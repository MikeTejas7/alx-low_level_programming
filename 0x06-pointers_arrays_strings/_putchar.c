#include <unistd.h>

/**
 * _putchar - Not a global std
 * @c: var char
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
