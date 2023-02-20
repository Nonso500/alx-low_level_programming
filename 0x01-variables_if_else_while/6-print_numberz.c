#include <stdio.h>
/**
 *  main - print all single digit numbers of base 10,
 *  using only putchar
 *  Return: Always 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('%d', a);
		a++;
	}
	putchar('\n');
	return (0);
}
