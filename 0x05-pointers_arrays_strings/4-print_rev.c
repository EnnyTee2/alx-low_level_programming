#include "main.h"

/**
 * print_rev - reverses string
 * @s: string to reverse 
 * Return: void
 */

int _strlength(char *a)
{
	int x, count = 0;

	for (x = 0; ; x++)
	{
		count++;
		if (a[x] == '\0')
		break;
	}
	return (count - 1);
}

void print_rev(char *s)
{
	int x, len = _strlength(s);

	for (x = len; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
