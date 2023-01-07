#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, j, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] < '0' || argv[x][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
