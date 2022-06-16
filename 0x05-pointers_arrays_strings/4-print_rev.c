#include "main.h"

/**
 * print_rev - reverses string
 * @s: string to reverse 
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	
	for (len; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
