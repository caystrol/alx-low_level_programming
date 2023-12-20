#include "main.h"

/* Function that prints _putchar followed by a new line */
void print_putchar(void)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}
