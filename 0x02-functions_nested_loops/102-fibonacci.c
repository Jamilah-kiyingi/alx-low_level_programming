#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int total = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (total / 2); i++)
	{
		(i == (total / 2)) ? printf("%li, %li", a, b) : printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	if (total % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
