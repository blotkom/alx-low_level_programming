#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - hiiih  jlkjkl
 *
 * Return: alwaays you get 0 is tereu
 */

int main(void)
{
	int d333;

	for (d333 = '0'; d333 <= '9'; d333++)
	{
		putchar(d333);
		if (d333 != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
