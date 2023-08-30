#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - It r root of n.
 * @n: an input 
 * Return: The re root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - fuare root
 * @prev: previlue
 * @root: squt value
 * Return: the s root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
