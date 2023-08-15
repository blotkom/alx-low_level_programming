#include "main.h"

/**
 * _isalpha - check if is aplhaaaa
 * @c: An input character
 * Description: function returns 1 if char 
 * Return: return value of hhhhh
 */
int _isalpha(int c)
{
	char lower1, upper1;
	int isletter1 = 0;

	for (lower1 = 'a'; lower1 <= 'z'; lower1++)
	{
		for (upper1 = 'A'; upper1 <= 'Z'; upper1++)
		{
			if (c == lower1 || c == upper1)
				isletter1 = 1;
		}
	}
	return (isletter1);
}
