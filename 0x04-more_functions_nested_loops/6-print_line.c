#include "main.h"

/**
 * print_line - prints a line with length proportional to the magnitude of n
 * 
 * Return: void
 */

void print_line(int n)
{
        int i = 0;
        
        if (n < 1)
        {
                _putchar('\n');
        }
        else
        {
                for (i; i <= n; i++)
                {
                        _putchar('_');
                }
                _putchar('\n');
        }
}
