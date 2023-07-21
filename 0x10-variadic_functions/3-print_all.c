#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A string specifying the types of arguments.
 * @...: The variable number of arguments (variadic).
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char separator = '\0';

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)str = "(nil)";
printf("%s", str);
break;
default:
separator = 0;
}

separator = ", ";
i++;

while (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
i++;

if (format[i] != '\0' && separator != 0)
printf("%s", &separator);
}

va_end(args);

printf("\n");
}
