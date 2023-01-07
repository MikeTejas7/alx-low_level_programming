#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two num
 * @argc:argc parameter
 * @argv: an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result)
		return (0);
}
