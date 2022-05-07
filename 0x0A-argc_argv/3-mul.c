#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: 0, if error return 1.
  */
int main(int argc, char *argv[])
{
	if (argc <= 2)
		printf("Error\n");
	else
		printf("%d\n",  atoi(argv[1]) *  atoi(argv[2]));
	return (0);
}
