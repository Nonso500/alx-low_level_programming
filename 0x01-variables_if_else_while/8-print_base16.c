#include <stdio.h>
/**
 * main-  a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
