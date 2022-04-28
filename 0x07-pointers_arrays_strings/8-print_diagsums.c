#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, j, ltr = 0, rtl = 0, lindex = 0, rindex = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				lindex = (size * i) + i;
				ltr += a[lindex];
				if ((i + j) == (size - 1))
				{
					rindex += (size - 1);
					rtl += a[rindex];
				}
			}
			else if ((i + j) == (size - 1))
			{
				rindex += (size - 1);
				rtl += a[rindex];
			}
		}
	}
	printf("%d, %d\n", ltr, rtl);
}
