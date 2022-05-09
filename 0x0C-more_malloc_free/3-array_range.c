#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @min: minimum, array start
 * @max: maximum, array end
 * Return: pointer to allocated memory corresponding with the array
 */

int *array_range(int min, int max)
{
	void *arr;
	int i;
        int size = (max - min + 1);
	char *k;

	if (min > max)
        {
		return (NULL);
        }
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
        {
		return (NULL);
        }
	k = arr;

	for (i = 0; i < size; i++)
        {
                k[i] = min;
                min++;
        }
	return (arr);
}
