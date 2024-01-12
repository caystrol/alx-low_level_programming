#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = _strlen(s);

    if (length <= 1)
        return 1;

    return check_palindrome(s, 0, length - 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return 0;

    return 1 + _strlen(s + 1);
}
