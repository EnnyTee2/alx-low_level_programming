#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory for an array formed by given range
 * @min: minimum, array start
 * @max: maximum, array end
 * Return: pointer to allocated memory corresponding with the array
 */

int *array_range(int min, int max)
{
        int *arr, i, size;
        size = (max - min + 1);
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
