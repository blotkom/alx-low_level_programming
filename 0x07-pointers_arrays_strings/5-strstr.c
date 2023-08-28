#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that  a substring.
 * @haystack: an input to search in
 * @needle: an input sttring haystack
 * Return:  a pointer to thated substring,
 * or NULL if the subs not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
