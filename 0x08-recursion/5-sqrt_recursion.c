#include "main.h"
/**
*operation-function for power operation
*@n: a number
*@c: a number
*
*Return: square root
*/
int operation(int n, int c)
{
	if (c % (n / c) == 0)
{
	if (c * (n / c) == n)
	return (c);
	else
	return (-1);
}
	return (0 + power_operation(n, c + 1));
}
/**
*_sqrt_recursion- the function used for recursion
*@n: a number
*Return: square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (0);
	if (n == 1)
	return (1);
	return (operation(n, 2));
}
