#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}

return (len);
}

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i, start_index;

if (length % 2 == 0)
start_index = length / 2;
else
start_index = (length - 1) / 2 + 1;

for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
