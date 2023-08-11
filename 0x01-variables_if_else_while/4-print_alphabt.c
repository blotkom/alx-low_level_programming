#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starttts
 *
 * Return: 0 is true
 */

int main(void)
{
	char low3, e2, q2;

	e2 = 'e';
	q2 = 'q';

	for (low3 = 'a'; low3 <= 'z'; low3++)
	{
		if (low3 != e2 && low3 != q2)
			putchar(low3);
	}
	putchar('\n');

	return (0);
}
