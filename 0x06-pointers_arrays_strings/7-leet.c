#include "main.h"

/**
 * leet - Encodes a string into 1337 format
 * @str: Input string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
    int i;
    char *letters = "aAeEoOtTlL";
    char *leet_code = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        int j;
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet_code[j];
                break;
            }
        }
    }

    return str;
}
