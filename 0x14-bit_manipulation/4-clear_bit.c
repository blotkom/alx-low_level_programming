#include "main.h"

/**
 * clear_bit - A function given index
 * @n: The numberbit in
 * @index: The index  bit at
 * Return: 1 if it wo1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
