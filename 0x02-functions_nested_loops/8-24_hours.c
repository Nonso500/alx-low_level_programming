#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59.
 * @void: no parameter
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
