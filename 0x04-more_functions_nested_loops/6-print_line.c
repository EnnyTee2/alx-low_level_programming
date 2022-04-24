#include "main.h"

/**
 * print_line - prints a line with length proportional to the magnitude of n
 * 
 * Return: void
 */

void print_line(int n)
{
        if (n < 1)
        {
                putchar('\n');
        }
        else
        {
                for (int i = 0; i <= n; i++)
                {
                        _putchar('_');
                }
                _putchar('\n');
        }
}
