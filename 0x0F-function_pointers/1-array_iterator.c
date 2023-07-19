#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The integer array.
 * @size: The size of the array.
 * @action: Pointer to the function to execute.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
for (size_t i = 0; i < size; i++)
action(array[i]);
}
}