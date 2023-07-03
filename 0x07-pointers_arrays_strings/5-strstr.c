#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the main string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
