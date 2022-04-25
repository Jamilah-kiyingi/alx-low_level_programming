#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i + len] = src[i];
	dest[i + len] = '\0';
	return (dest);
}
