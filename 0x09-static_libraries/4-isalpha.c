#include "main.h"

/**
 * _isalpha - Fx that check alphabetic xter
 * @c: is a letter, lowercase or uppercase
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
