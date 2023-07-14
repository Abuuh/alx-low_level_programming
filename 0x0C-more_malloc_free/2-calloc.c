#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, returns NULL.
 *         If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

char *temp = ptr;
for (unsigned int i = 0; i < total_size; i++)
temp[i] = 0;

return (ptr);
}
