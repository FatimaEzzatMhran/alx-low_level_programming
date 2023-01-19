#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction operator
 * @a: first int
 * @b: second int
 * Return: difference of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b)
}

/**
 * op_div - division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of division (if divided by 0 exit 100)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division (if divided by 0 exit 100)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
