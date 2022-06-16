#include "main.h"

/**
 * _strlen - get the length of parsed string
 * @s: string to get length;
 * Return: returns the length
 */

int _strlen(char *s)
{
	int x, count = 0;

	for (x = 0; ; x++)
	{
		count++;
		if (s[x] == '\0')
		break;
	}
	return (count - 1);
}
