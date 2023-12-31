#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @i: The current value to check
 *
 * Return: The square root of n,
 *         or -1 if n does not have a natural square root
 */
int sqrt_recursive(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n,
 *         or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_recursive(n, 0));
}
