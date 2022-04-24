#include "main.h"

/**
 * print_line - prints a line with length proportional to the magnitude of n
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
        int i = 0;
        
        while (i < n)
        {
                _putchar('_');
                i++;
        }
        _putchar('\n');
}
