#include "main.h"

/**
 * _strlen_recursion - a function tha a string.
 * @s: An input string
 * Return: The lengstring
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
