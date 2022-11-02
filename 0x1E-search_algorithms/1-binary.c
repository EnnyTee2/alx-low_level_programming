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

int binary_search(int *array, size_t size, int value)
{
	size_t end = size - 1;
	size_t start = 0;
	size_t mid;
	
	mid = (start + end) / 2;
	while (mid >= start)
	{
		if (value > array[mid])
		{
			array = &array[mid];
			size = size / 2;
			return binary_search(array, size, value);
		}
		else if (value < array[mid])
		{
			size = size / 2;
			return binary_search(array, size, value);
		}
		else if (value == array[mid])
		{
			return (mid);
		}
		else 
		{
			return (-1);
		}
	}
}
