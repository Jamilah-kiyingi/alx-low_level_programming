#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1 = 1, num2 = 1, sum = 1, sum_even = 0;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if ((sum <= 40000000) && (sum % 2 == 0))
			sum_even += sum;
	}
	printf("%d\n", sum_even);
	return (0);
}
