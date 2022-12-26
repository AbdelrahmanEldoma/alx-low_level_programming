#include "main.h"
/**
*factorial- the function used for recursion
*@n: a number
*
*Return: factorial pf a number
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
