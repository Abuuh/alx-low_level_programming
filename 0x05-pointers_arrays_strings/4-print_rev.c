#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno.
 *
 * Description: This function writes the character 'c' to the
 * standard output (stdout).
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function prints the characters of the string
 * pointed to by 's' in reverse order, followed by a new line character ('\n').
 */
void print_rev(char *s)
{
int length = 0;
int i;

/* Calculate the length of the string */
while (s[length] != '\0')
length++;

/* Print the characters in reverse order */
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
