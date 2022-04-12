#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: as above
 *
 * Return: Always 0 (succes)
 *
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);

}
