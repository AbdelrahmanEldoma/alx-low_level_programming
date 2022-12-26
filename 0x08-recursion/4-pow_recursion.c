#include "main.h"
/**
*_pow_recursion- the function used for recursion
*@x: a number
*@y: a number
*
*Return: a number to a power of a number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));

}
