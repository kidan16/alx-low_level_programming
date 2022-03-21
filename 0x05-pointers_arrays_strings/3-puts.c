#include "main.h"
#include <string.h>
/**
 * _puts -returns a string, followed by a new line.
 * @str: is the value of the char variable.
 *
 * Return: void.
 */
void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (i);
}
