#include <stdio.h>

/**
 * main - print all possible different combo of 2 digits
 *
 * Description: prints the double combo with the 2 digits different
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}		
		i++;
	}

	putchar(10);
	return (0);
}
