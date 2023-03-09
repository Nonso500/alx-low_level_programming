#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
*
* Return: 1 or -1
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	i = n * _sqrt_recursion(n - 1);
	return (i);
}

int_sqrt_recursion(int n)
{
	int a;

	a = _sqrt_recursion(1);
}
