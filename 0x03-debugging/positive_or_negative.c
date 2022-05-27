#include <stdio.h>

/**
 * p_or_n - the function tests whether a number is positve and 
 * thus display the desired test result
 * Description: as written above
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 1)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 1)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
