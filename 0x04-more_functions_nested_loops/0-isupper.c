#include <ctype.h>

/**
 * _isupper - function that tests input whether it is Upper case
 *
 * Return: (0)
 */

int _isupper(char c)
{
	int rev;

	if (c >= 'a' && c <= 'z')
	{
		rev = 0;
	}
	else
	{
		rev = 1;
	}
	return rev;
}
