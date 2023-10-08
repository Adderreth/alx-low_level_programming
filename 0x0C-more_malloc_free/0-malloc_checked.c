#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memory size
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

char *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);

}
