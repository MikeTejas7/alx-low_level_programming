#include <stdio.h>

/**
 * main - Program that prints all argument
 * @argc: argc parameter
 * @argv: an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
