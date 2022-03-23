#include "main.h"
/**
 * _strcat- concatenates two strings.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 * @n: is an int parameter.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
        	dest[length] = src[j];
	}

	return (*dest);
}
