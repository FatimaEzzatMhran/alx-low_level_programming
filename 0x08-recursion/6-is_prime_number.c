#include "main.h"

int is_prime_number(int n);
int CheckPrime(int i, int n);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 * Return: If the integer is not prime - Return 0
 *         If the integer is prime - Return 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (CheckPrime(i, n));
}

/**
 * CheckPrime - Checks if the number is divisible
 * @i: The divisor
 * @n: The number to be checked
 * Return: If the integer doesn't has a remainder - Return 0
 *         If the integer has a remainder - Return 1
 */
int CheckPrime(int i, int n)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (CheckPrime(i + 1, n));
}
