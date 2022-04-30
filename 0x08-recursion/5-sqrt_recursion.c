#include "main.h"

/**
 * sqrt_calc - Finds natural square root, if it exists
 * @n: Variable holding potential natural square root
 * @m: Variable of original inputted value
 * Return: The natural square root, or -1 if one does not exist
 */
int sqrt_calc(int m, int n)
{
	if (n == m * m)
		return (n / m);
	else if (n < m * m)
		return (-1);
	return (sqrt_calc(m + 1, n));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: Original value
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (sqrt_calc(1, n));
}
