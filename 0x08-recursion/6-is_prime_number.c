#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - Afuncdwedewf a number is prime.
 * @n: an inpuer
 * Return: 1 if n is in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - chf is divisible
 * @num: the num be checked
 * @div: the resdivision
 * Return: 1 if if numis not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
