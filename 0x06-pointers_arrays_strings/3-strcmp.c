#include "main.h"
/**
 * _strcmp- compares two strings.
 * @s1: is a string parameter.
 * @s2: is a string parameter.
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)

{

	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		*str1++;
		*str2++;
	}

	return (*str1 - *str2);
}
