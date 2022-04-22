#include "main.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: String to be cut in half
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0, half;

	while (str[len] != '\0')
		len++;
	half = (len % 2 == 0) ? (len / 2) : ((len / 2) + 1);
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
