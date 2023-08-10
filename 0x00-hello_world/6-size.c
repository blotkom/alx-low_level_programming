#include <stdio.h>

/**
 * main - byte calculator
 *
 * Return: if get 0 very good
 */
int main(void)
{
	int a1;
	long int b1;
	long long int c1;
	char d1;
	float f1;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b1));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c1));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f1));
	return (0);
}
