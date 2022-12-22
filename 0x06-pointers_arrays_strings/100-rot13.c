#include "main.h"

/**
 * rot13 - Fx that encodes a string using rot13
 * @c: char c
 * Return: 0
 */
char *rot13(char *c)
{
	int i, j;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
	     alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
