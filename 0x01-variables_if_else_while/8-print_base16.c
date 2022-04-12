#include <stdio.h>

/**
 * main - print all the numbers of base 16
 *
 * Description: prints them in lowercase + newline
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int x = 0;

	while (x < 48)
	{
		if (x < 10)
		{
			putchar(x + '0');
		}
		else if (x > 41)
		{
			putchar(x - 10 + 'A');
		}
		x++;
	}
	putchar(10);

	return (0);
}
