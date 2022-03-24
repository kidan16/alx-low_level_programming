#include "main.h"
/**
 * _strcat- concatenates two strings limiting the the second string to n bytes.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 * @n: is an int parameter.
 * Return: char.
 */
char *_strcat(char *dest, char *src, int n)

{
	int l, j;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	j= 0;
	while (j < n && src[j] != '\0')
	{
		dest[l] = src[j];
		l++;
		j++;
	}

	dest[l] = '\0';

	return (dest);
}
