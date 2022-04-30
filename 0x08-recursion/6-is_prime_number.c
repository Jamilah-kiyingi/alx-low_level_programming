#include "main.h"

/**
 * is_prime_num - detects if an input number is a prime number.
 * @n: input number.
 * @iter: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_num(int n, int iter)
{
	if (n % iter == 0)
	{
		if (n == iter)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime_num(n, ++iter));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_num(n, 2));
}
