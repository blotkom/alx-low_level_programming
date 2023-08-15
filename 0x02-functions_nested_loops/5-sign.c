#include "main.h"

/**
 * print_sign - postive non and sign
 * @n: An input number
 * Return: 1 if number is positive, o if number is 0, or
 */
int print_sign(int n)
{
	int value4;

	if (n > 0)
	{
		value4 = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value4 = 0;
		_putchar('0');
	}
	else
	{
		value4 = -1;
		_putchar('-');
	}

	return (value4);
}
