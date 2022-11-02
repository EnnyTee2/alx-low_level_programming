#include "search_algos.h"

/**
  * linear_search - function to search for a value 'value' in
  *	given array 'array' using linear search algorithm
  * @array: int - pointer to the array
  * @size: size_t - number of elements in the array
  * @value: int - value to find in array
  * Return: -1 - if value not found or empty array
  *	   first index of value in the array
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
