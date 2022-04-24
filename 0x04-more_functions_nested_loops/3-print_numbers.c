#include "main.h"

/**
 * print_numbers - print the numbers btw 0 and 9 inclusive
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
