#include "main.h"

/**
 * _strcmp - Fx that compares two strings
 * @s1: str one
 * @s2: str two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
