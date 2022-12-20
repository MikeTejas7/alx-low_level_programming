#include "main.h"
#include <stdio.h>

/**
 * print_array - Fx that prints n elements of an array
 * @a: int a
 * @n: int n
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
