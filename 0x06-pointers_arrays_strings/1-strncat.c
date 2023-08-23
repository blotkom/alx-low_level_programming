#include "main.h"

/**
 * _strncat - a functiotenates two strings.
 * @dest: an input string
 * @src: an inputg
 * @n: an inpunteger
 * Return: A pointeresulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
