#include "main.h"

/**
 * _islower -print if low
 * @c: input
 * Return: 1 if is low or 0 if is up
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}

	return (low);
}
