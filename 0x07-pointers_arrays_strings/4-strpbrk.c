#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function ting for any of a set of bytes.
 * @s: an input string
 * @accept: an input characrate into string s
 * Return:  a pointer to thone of the bytes in accept,
 * or NULL if no s found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
