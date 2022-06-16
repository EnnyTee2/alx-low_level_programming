#include "main.h"

/**
 * _puts - write a string to stdout
 * @str: string to write
 * Return: returns the length
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}

	_putchar('\n');
}
