#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: Alwaiys 1.
 */

int main(void)

{
	write("and that piece of art is useful\" - Dora Kopar, 2015-10-19\n", stderr);
	return (1);
}
