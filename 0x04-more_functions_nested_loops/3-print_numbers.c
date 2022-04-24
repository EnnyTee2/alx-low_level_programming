#include "main.h"

/**
 * print_numbers - print the numbers btw 0 and 9 inclusive
 * @c: variable to represent each number in the loop
 *
 * Return: default
 */

void print_numbers()
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
