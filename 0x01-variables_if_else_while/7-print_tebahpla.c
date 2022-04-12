#include <stdio.h>

/**
 * main - print the letters of alphabet
 *
 * Description: print the letters in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar(10);
	return (0);

}
