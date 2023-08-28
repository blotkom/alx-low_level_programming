#include "main.h"

/**
 * _memcpy - a function that coppy
 * @dest: memory area desopy
 * @src: memoce to copy from
 * @n: numbytes
 * Return: returns poiny location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
