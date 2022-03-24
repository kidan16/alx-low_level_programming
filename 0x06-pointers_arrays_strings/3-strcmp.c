#include "main.h"
/**
 * _strcmp- compares two strings.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)

{
	char *str1 = s1;
	char *str2 = s2;

	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
