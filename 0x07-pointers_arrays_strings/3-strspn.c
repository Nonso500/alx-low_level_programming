#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int z = 0;

	for (i = 0; i < s[i] != '\0'; i++)
	{
		for (j = 0; j < accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				z++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (z);
		}
	}
	return (z);
}
