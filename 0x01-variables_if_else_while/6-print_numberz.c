#include <stdio.h>
/**
 * main-  a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function.
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
