#include "main.h"

/**
 * _strlen - get the length of parsed string
 * @s: string to get length;
 * Return: returns the length 
 */

int _strlen(char *s)
{
	int count = 0;
	
	for (int x = 0;; x++)
	{
	    count++;
	    if (s[x] == '\0')
		break;
	}
	return (count - 1);
}
