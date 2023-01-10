#include "main.h"

/**
 * create_array - Fx that creates an array of chars, & initializes it witha spec char
 * @size: size of array
 * @c: character to init array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * size);
	if (char_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		char_arr[i] = c;
	return (char_arr);
}
