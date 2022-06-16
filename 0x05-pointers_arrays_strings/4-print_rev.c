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
	int len = _strlength(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
