#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - 0 (Success)
 * Return: Returns the alphabets in lowercase
 * in reverse
 */

int main(void)
{
int i, j;

i = 122;
j = 10;
do {
putchar(i);
i--;
} while (i > 96);
putchar(j);

return (0);
}
