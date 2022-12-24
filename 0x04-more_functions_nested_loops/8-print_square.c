#include <stdio.h>
#include "main.h"
/**
*print_square- prints a square of "#"
*
*@n: an integer
*Return: no return value
*/
void print_square(int n)
{
	if (n > 0)
{
		int i;

		for (i = 0; i < n; ++i)
{
			for (int j = 0; j < n; ++j)
{
				_putchar('#');
}
			_putchar('\n');
}
}
	else
		_putchar('\n');
}

