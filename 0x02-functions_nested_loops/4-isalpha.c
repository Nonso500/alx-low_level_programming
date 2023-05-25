#include "main.h"

/**
 * _isalpha- a function that checks for lowercase or uppercase character
 * @c: int we are checking for
 *
 * Description: Write a function that checks for lowercase character.
 * ctype.h:  It is a standard library function
 * defined in the <ctype.h> header file.
 * Return: Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
