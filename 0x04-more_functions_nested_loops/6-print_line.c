#include "main.h"

/**
 * print_line - straight line in the terminal.
  * @n: An inpu numvber of elemnts
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
