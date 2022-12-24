#include <stdio.h>
#include "main.h"
/**
*print_square- prints a square of "#"
*
*@size: an integer
*Return: no return value
*/
void print_square(int size)
{
	if (size > 0)
{
	int i;
	int j;

	for (i = 0; i < size; ++i)
{
	for (j = 0; j < size; ++j)
{
	_putchar('#');
}
	_putchar('\n');
}
}
	else
		_putchar('\n');
}