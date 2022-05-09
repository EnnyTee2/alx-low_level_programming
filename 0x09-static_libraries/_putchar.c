#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
        write(1, c);
        return(0);
}
