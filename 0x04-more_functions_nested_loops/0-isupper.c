#include <ctype.h>

/**
 * _isupper - function that tests input whether it is Upper case
 *
 * Return: (0)
 */

int _isupper(int c)
{
	int rev;

	if (c >= 'a' && <= 'z')
	{
		rev = 0;
	}
	else if (c >= 'A' && <= 'Z')
	{
		rev = 1;
	}
	return rev;
}
