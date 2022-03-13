#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a;

putchar (48);

for (a = 49; a <= 57; a++)
{
putchar (',');
putchar (' ');
putchar (a);
}

return (0);
}
