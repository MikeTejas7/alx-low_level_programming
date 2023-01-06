#include <stdio.h>
#define UNUSED(x)  (void)(x)

/**
 * main - Program to print name, \n
 * @argc: parameter
 * @argv: an array
 * Return: 0
 */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
