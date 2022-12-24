#include <stdio.h>
#include "main.h"
/**
*print_diagonal- prints "\" n times
*
*@n: an integer
*Return: no return value
*/
void print_diagonal(int n)
{
	if (n > 0)
{
	int i;

	for (i = 0; i < n; ++i)
{
	for (int j = 0; j < i; ++j)
{
	_putchar(32);
}
	_putchar(92);
	_putchar('\n');
}
}
	else
	_putchar('\n');
}

