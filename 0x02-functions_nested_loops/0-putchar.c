#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char *character = "_putchar\n";

	while (*character)
	{
		_putchar(*character);
		character++;
	}
	return (0);
}
