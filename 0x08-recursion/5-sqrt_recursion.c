#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);

return (_sqroot(0, n));
}

/**
 * _sqroot - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqroot(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);

return (_sqroot(n + 1, x));
}
