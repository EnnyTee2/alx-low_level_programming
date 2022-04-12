#include <stdio.h>

/**
 * main - print all possible combo of single digit numbers
 *
 * Description: Print as above
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x;

	x = 48;
	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar(10);

	return (0);
}
