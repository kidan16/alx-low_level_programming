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
	int length, j;

	length = 0;
	while (dest[length] != '\0') 
	{	
		++length;
	}

	for (j = 0; (j + 1) <= n; ++j, ++length)
	{
		dest[length] = src[j];
	}
	if ( (j + 1) >= n)
	{
		_putchar(dest);
	}
		else
			{
				dest[length] = '\n';
				_putchar(dust);
			}

	return (dest);
}
