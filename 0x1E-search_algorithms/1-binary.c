#include "search_algos.h"

/**
  * binary_search - function to search for a value 'value' in
  *	given array 'array' using binary search algorithm
  * @array: int - pointer to the array
  * @size: size_t - number of elements in the array
  * @value: int - value to find in array
  * Return: -1 - if value not found or empty array
  *	   first index of value in the array
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
