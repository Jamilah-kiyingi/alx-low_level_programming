#include <stdio.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: zero.
  */
int main(int argc, char *argv[])
{
	int len = 0;

	while (len < argc)
	{
		printf("%s\n", argv[len]);
		len++;
	}
	return (0);
}
