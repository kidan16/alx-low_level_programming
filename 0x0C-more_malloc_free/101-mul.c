#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 on success 98 on faliure
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');

	}
		else
			multiply(n1, n2);
	return (0);
}
