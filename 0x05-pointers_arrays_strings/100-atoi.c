#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int sign = 1, num = 0;

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
			num = (num * 10) + (*s - '0');
		else if ((*s == 32) && (*(s - 1) >= 48 && *(s - 1) <= 57))
			break;
		else if (*s == '-')
			sign *= -1;
		s++;
	}
	return (num * sign);
}
