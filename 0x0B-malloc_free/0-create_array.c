#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array: creates an array of chars, and initializes it with a specific char.
 * @size: size of the array to be created
 * @c: specific char to be initialized
 * Return: NULL - if size is 0
 *         NULL - if it fails to create array
 *         pointer to array - if it succeds
 */
  
 char *create_array(unsigned int size, char c)
 {
        char *str;
        str = malloc(sizeof(char));
        str[0] = c;
        
        free(str);
 }
