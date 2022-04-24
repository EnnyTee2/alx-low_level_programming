#include "main.h"

/**
 * _isupper - function that tests input whether it is Upper case
 *  @c: character to check for case
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
