#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

	/* if (len % 2 == 0)
	{
		half = len / 2;
		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else
	{
		half = (len - 1) / 2;
		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');

	}
	*/
}
