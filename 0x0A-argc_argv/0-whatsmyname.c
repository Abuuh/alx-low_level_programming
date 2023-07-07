 #include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: Prints the name of the program
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/* Marking argc as unused */
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
