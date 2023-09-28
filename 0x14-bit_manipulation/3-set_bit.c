#include "main.h"

/**
 * set_bit - A function that given index to 1
 * @n: The number tt in
 * @index: The i to sit at
 * Return: 1 if it wor1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
