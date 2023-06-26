#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int passwordLength = 12; /* Adjust the length of the password as desired */
char password[13]; /* Leave space for the null terminator */

srand(time(0)); /* Seed the random number generator with current time */

/* Generate random characters for the password */
for (int i = 0; i < passwordLength; i++)
{
/* Generate a random ASCII character within the desired range */
password[i] = rand() % 94 + 33;
}

password[passwordLength] = '\0'; /* Add the null terminator at the end */

printf("%s\n", password); /* Print the generated password */

return (0);
}
