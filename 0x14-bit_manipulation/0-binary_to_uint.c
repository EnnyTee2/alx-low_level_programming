#include <stdio.h>
#include <string.h>
#include "main.h"


/*
 * binary_to_uint - function to convert binary to uint
 * @b: binary string to be converted
 * Return: 0, if b contains unidentified char or b is NULL
 *		the converted number if b is valid
 */
 
 unsigned int binary_to_uint(const char *b)
 {
 	unsigned int sum = 0, power = 1;
	int length, j;
	
	if (b) 
	{
		length  = strlen(b) - 1;
		for (j = length; j >= 0; j--)
		{
			sum += (b[j] - '0') * power;
			power *= 2;
			printf("%d\n", (b[j] - '0'));
		}
		return sum;
	}
	else
	{
		return 0;
	}
 }
