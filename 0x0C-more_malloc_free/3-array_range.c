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
	int *arr;
	int i;
        int size = (max - min + 1);

	if (min > max)
        {
		return (NULL);
        }
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
        {
		return (NULL);
        }

	for (i = 0; i < size; i++)
        {
                arr[i] = min;
                min++;
        }
	return (arr);
}
