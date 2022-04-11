#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int thousands;
	int tens;
	int ones;

	for (thousands = 0; thousands <= 9; thousands++)
	{
		for (tens = thousands + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(thousands + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (thousands < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
