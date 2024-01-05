#include "main.h"

/**
 * _strncpy - Copies at most n bytes of src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to be copied
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}
