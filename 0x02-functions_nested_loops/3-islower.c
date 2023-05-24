#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - a function that checks for lowercase character.
 * @c: int we are checking for
 *
 * Description: Write a function that checks for lowercase character.
 * ctype.h:  It is a standard library function
 * defined in the <ctype.h> header file.
 * Return: Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
