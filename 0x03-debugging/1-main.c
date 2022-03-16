#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)

{
int i;

printf("Infinite loop incoming :(\n"); /* The '(' character is not needed */

i = 0;

while (i < 10) /* The value of the integer i is always 0(not incremented) */
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
