#include <stdio.h>

int main(int argc, char *argv[])
{
/* Check if at least one argument (program name) is provided */
if (argc > 0)
 {
/* Print the program name (first argument) */
 printf("%s\n", argv[0]);
 return 0;
}
else
{
/* No arguments provided (should not happen in normal execution) */
 fprintf(stderr, "Error: No program name provided.\n");
 return 1;
}
}
