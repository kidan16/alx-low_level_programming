<<<<<<< HEAD
#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
			v1 = s[i];
			v2 = s[j];
			s[i] = v2;
			s[j] = v1;
			j--;
			i++;
	}
}
}
=======
#include "holberton.h"
/**
 * print_rev -prints a string, in reverse, followed by a new line.
 * @s: char pointer.
 * Return: void.
 */
void print_rev(char *s)

{
int i, n;

for (i = 0; s[i] != '\0'; i++)

continue;
} 
n = i - 1;

for (i = n; i >= 1; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
>>>>>>> d74d659b39cad152c65debda348ef2ba74dfd9ed
