#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: Prints the number of arguments passed into the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* Marking argv as unused */
printf("%d\n", argc - 1);
return (0);
}
