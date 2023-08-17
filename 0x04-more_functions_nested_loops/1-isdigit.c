#include "main.h"

/**
 * _isdigit - A function that checks digs(0 through 9).
 * @c: An input integerss 
 * Return: 1 if c is a digits or 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
