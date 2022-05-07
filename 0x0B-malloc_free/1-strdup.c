#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i, j;
	char *newstr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	newstr = malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return (NULL);
	for (j = 0; j <= i; j++)
		newstr[j] = str[j];
	newstr[j + 1] = '\0';
	return (newstr);
}
