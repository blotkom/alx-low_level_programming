#include "main.h"

/**
 * clear_bit - A function given indexddwefr
 * @n: The numberbit infrfrf
 * @index: The index  bit atfrfrxc
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
