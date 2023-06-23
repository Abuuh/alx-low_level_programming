#include "main.h"

void more_numbers(void);
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar((j %\d 10) + '0');
}
_putchar('\n');
}
}
