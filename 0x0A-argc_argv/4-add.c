#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: Adds positive numbers and prints the result
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int i, num, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (num = 0; argv[i][num] != '\0'; num++)
{
if (argv[i][num] < '0' || argv[i][num] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
