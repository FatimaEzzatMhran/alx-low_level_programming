#include "main.h"

int _sqrt_recursion(int n);
int find_sqrt(int num, int root);

/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: The number to return the square root of
 * Return: If 'n' has a natural square root - the natural square root of n
 *         If 'n' doesn't have a natural square root - return '-1'
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find the square root of
 * @root: The root to be tested
 * Return: If 'num' has a natural square root - the square root
 *         If 'num' doesnot have a natural squaer root - return '-1'
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
