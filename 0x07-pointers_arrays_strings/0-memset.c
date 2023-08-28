#include "main.h"

/**
 * _memset - a function that make tolda
 * @s: locatio
 * @b: char to fi
 * @n: number of bytes to l
 * Return: returns poation filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
