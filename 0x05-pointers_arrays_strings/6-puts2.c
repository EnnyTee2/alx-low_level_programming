#include "main.h"

/**
 * puts2 - print each character on a newline
 * @str: string from which to print char
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int x = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (x < len)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
