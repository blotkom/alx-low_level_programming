#include "main.h"

/**
 * _puts_recursion - a function ted  new line.
 * @s: An input strin
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
