#include "main.h"
/**
 * _strncpy -  a function that copies a string.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

