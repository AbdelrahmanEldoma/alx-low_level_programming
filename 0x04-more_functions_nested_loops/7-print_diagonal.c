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
	putchar(' ');
}
	putchar(92);
	putchar('\n');
}
}
	else
		putchar('\n');
}

