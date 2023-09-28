#include "main.h"

/**
 * get_bit - A fuit at index
 * @n: The numbe t bit from
 * @index: The index wherehe bit get at
 * Return: The valueerror occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
