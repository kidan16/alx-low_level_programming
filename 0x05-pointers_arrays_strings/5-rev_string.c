#include "main.h"
/**
 * print_rev -reverses a string.
 * @s: char pointer.
 * Return: void.
 */
void rev_string(char *s)

{
int i, j;
char a[500];
i = 0;
j = 0;
while(*(s+1))
{
*(a + i) = *(s + i);
i++;
}

i = i - 1;
while(i >= 0)
{
*(s + i) = *(a + j);
j++;
i--;
}
