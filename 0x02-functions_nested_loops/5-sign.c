#include <stdio.h>
#include "main.h"
/**
*print_sign - checks of if a number
*positive, negative or zero
*
*@n: a variable
*Return: returns 1,-1, or 0
*/
int print_sign(int n)
{
	if (n > 0)

{
	_putchar('+');
	return (1);
}

	if (n < 0)

{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}
