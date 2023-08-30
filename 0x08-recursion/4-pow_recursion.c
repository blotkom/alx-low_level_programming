#include "main.h"

/**
 * _pow_recursion - It retu to the power y.
 * @x: the ba
 * @y: the enent
 * Return: The result of sed y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
