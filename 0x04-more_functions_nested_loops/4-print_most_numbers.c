#include "main.h"

/**
 * print_most_numbers - a function print the numbers, from 0 to 9.
 * Do not 2m4
 * Return: Always return 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
