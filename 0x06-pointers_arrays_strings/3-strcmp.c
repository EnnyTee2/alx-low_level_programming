#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * @cmp: temp variable to hold comparison
 *
 * Return: cmp, the negative difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;
	
	while (*s1 && *s2 && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++
	}
	return cmp;
}
