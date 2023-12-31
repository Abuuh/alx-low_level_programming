#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an array of integers.
 * @size: The number of elements in the array.
 * @cmp: Function pointer to the function used to compare values.
 *
 * Return: The index of the first element for which the cmp function does not
 * return 0, or -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}

return (-1);
}
