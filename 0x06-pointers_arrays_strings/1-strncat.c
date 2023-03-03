#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: input value
 * @src: input value
 *@n: input n
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int n;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0
		while (src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
