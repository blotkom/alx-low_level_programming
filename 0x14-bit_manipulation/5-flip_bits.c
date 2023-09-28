/**
 * flip_bits - A fjjjjunctded to flip
 * @n: How my bit fliequal m for n
 * @m: The nggggguther equal
 * Return: Th of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}
