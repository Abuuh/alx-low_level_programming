#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the reallocated memory block.
 *If ptr is NULL, equivalent to malloc(new_size).
 *If new_size is equal to zero and ptr is not NULL, equivalent to free(ptr).
 *If realloc fails or new_size is equal to old_size, returns ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
if (new_size == 0)
{
free(ptr);
return (NULL);
}

/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* Allocate memory for the new block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* Copy the contents from the old block to the new block */
/* Copy up to the minimum of old_size and new_size */
memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

/* Free the old block */
free(ptr);

return (new_ptr);
}
