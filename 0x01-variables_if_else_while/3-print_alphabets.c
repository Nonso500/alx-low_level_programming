#include <stdio.h>
/**
 * main-  a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c = c + 1)
		putchar(c);
	putchar('\n');

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	return (0);
}
