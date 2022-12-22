#include "main.h"

/**
 * string_toupper - Fx that changes all lowercase to uppercase
 * @a: given char
 * Return: 0
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
			a[i] -= 32;
		i++;
	}
	return (a);
}
