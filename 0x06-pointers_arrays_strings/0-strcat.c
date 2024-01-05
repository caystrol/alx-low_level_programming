#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*temp)
temp++;

while (*src)
{
*temp = *src;
temp++;
src++;
}

*temp = '\0'; /* Adding the null terminator at the end */

return dest;
}
