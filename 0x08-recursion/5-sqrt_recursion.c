#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n. If n does not have a natural square
 * root, return -1.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return find_sqrt(n, 0);
}

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number for which to find the square root.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n. If n does not have a natural square
 * root, return -1.
 */
int find_sqrt(int n, int i)
{
    if (i * i == n)
        return i;

    if (i * i > n)
        return -1;

    return find_sqrt(n, i + 1);
}
