#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer to allocated memory corresponding with the string
 */

int *array_range(int min, int max)
{
	void *arr;
	unsigned int i;
	char *k;
        int size = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);

	k = arr;
	for (i = 0; i < size; i++)
		k[i] = min;
                min++;
	return (arr);
}
