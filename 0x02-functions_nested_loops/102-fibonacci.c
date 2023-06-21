#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 50;
unsigned long long int first = 1, second = 2;

printf("%llu, %llu", first, second);

for (int i = 3; i <= count; i++)
{
unsigned long long int next = first + second;
printf(", %llu", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
