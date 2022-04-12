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

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar(10);

	return (0);
}
