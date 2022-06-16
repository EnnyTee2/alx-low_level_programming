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
		if (str[x] != ' ')
		{
			_putchar(str[x]);
			_putchar('\n');
		}
		x++;
	}
}
