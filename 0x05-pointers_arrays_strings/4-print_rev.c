#include "main.h"

/**
* print_rev - print reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int count = 0;
int x;
while (*s != '\0')
{
count++;
s++;
}
s--;
for (x = count; x > 0; x--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
