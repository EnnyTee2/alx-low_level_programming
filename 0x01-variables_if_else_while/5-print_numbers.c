#include <stdio.h>

/**
 * main - printing single digit numbers of base 10 (0 - 9)
 *
 * Description: as above
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;
	x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar(10);

	return (0);
}
