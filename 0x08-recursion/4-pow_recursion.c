#include "main.h"
/**
 * _pow_recursion - power
 * @x:int
 * @y:int
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
	}
	return (i);
int _sqrt_recursion(int n);}
