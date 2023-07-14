#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);
int _strlen(char *str);
void _multiply(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
return (1);
}

_multiply(argv[1], argv[2]);

return (0);
}

/**
 * _isdigit - Checks if a string contains only digits
 * @str: The input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int _isdigit(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}

return (1);
}

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
 * _multiply - Multiplies two numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 */
void _multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int *result;
int i, j, k, carry, n1, n2, sum;

result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
{
printf("Error\n");
exit(1);
}

for (i = 0; i < len1 + len2; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;
k = len1 + len2 - 1 - (len1 - 1 - i);

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = (n1 *n2) + carry + result[k];
carry = sum / 10;
result[k] = sum % 10;
k--;
}

if (carry > 0)
result[k] += carry;
}

i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;

for (; i < len1 + len2; i++)
printf("%d", result[i]);

printf("\n");

free(result);
}
