#include "main.h"
/**
 * _strncat- concatenates two strings taking n bytes from src.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 * @n: is an int parameter.
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)

{
int l, j;

l = 0;
while (dest[l] != '\0')
{
l++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[l] = src[j];
l++;
j++;
}

dest[l] = '\0';

return (dest);
}
