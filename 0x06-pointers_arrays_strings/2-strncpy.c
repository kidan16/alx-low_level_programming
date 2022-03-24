#include "main.h"
/**
 * _strncpy- copy src and overwrite dest.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 * @n: is an int parameter.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int j;

	for (j = 0, j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
