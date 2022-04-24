#include "main.h"

/**
 * _isdigit - checks if the character is a digit
 * @c: character to be checked
 *
 * Return: 1 if digit, 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
