/**
 * void swap_int - Swaps the value of the integer.
 * @a: Swaps the value to be updated
 * @b: Swaps the value to be updated
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
