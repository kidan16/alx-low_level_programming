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
	int l, j;

	l = 0;

	for (j = 0, j < n && src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}
	while (j < n)
	{
		dest[l] = '\0';
		j++;
	}

	return (dest);
}
