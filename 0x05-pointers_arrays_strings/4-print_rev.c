#include "main.h"

/**
 * print_rev - reverses string
 * @s: string to reverse 
 * Return: void
 */

void print_rev(char *s)
{
	int x, len = _strlen(s);

	for (x = len; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
