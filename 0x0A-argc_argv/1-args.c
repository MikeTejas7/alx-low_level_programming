#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the num of arg passed into it
 * @argc: argument that count
 * *@argv:argument parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
