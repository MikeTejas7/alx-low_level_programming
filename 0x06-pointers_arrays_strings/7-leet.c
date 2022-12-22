#include "main.h"

/**
 * leet - Fx that encodes a string into 1337
 * @n: char xter
 * Return: 0
 */
char *leet(char *n)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;
		while (b < l)
		{
			if (n[a] == tr[b] || n[a] - 32 == tr[b])
				n[a] = trw[b];
			b++;
		}
		a++;
	}
	return (n);
}
