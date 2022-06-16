#include "main.h"

/**
 * _rev_string - prints the string in reverse
 * @s: string to reverse;
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, x, y;

	while (s[len] != '\0')
	{
		len++;
	}

	char temp[len];
	y = len-1;

	while (y >= 0)
	{
	    temp[y] = s[x];
	    x++;
	    y--;
	}

	for (x = 0; x < len; x++)
	{
		s[x] = temp[x];
	}
}
