#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of program.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: NULL if ac == 0 or av == NULL else
 * pointer to a string of NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, length = 0;
	char *str;

	if (ac == 0 || !av)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		length++;
		i++;
	}
	str = malloc((sizeof(char) + length));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
