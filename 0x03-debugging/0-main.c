#include "main.h"
#include "../0x03-debugging/positive_or_negative.c"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	return (0);
}
