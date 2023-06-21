#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long long int prev = 1, curr = 2;
unsigned long long int sum = 0;

/* Find and sum the even-valued terms in the Fibonacci sequence */
while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}

unsigned long long int next = prev + curr;
prev = curr;
curr = next;
}

/* Print the sum of the even-valued terms */
printf("%llu\n", sum);

return (0);
}
