#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: Input string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
    char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while (alpha[j] != '\0')
        {
            if (str[i] == alpha[j])
            {
                str[i] = rot13[j];
                break;
            }
            j++;
        }
    }

    return str;
}
