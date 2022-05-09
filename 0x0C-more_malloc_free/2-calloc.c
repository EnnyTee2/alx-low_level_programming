#include "main.h"
#include <stdlib.h>

**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
         
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *str;
        if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }
        str = malloc(size*nmemb);
        if (str == NULL)
        {
                return (NULL);
        }
        return (str);
        
}
