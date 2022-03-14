#include <stdio.h>
11;rgb:0000/0000/0000
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
int x;
int y;
int z;

for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
if (((x != y) && (x != z) && (y != z)) && (x != y) && (y != z))
{
putchar(x);
putchar(y);
putchar(z);

if ((x == 55) && (y == 56) && (z == 57))
{}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
