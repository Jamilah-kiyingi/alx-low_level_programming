#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
//  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}

// #include "main.h"

// /**
//  * binary_to_uint - converts a binary number to an unsigned int
//  * @b: pointer to the string of 0 and 1 chars
//  * Return: the converted number
//  */
// unsigned int binary_to_uint(const char *b)
// {
// 	unsigned int placeVal = 0;
// 	int i;

// 	if (!b)
// 		return (0);

// 	for (i = 0; b[i]; i++)
// 	{
// 		if (b[i] != '0' && b[i] != '1')
// 			return (0);
// 		placeVal = 2 * placeVal + (b[i] - '0');
// 	}

// 	return (placeVal);
// }
