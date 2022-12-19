#include "main.h"

/**
 * swap_int - Fx that swaps the values of two int
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
