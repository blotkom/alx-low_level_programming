#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function tr in a string.
 * @s: an input  search in
 * @c: an input charaate into string s
 * Return: returns pointion
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
