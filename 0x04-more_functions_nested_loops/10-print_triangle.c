#include <stdio.h>
#include "main.h"
/**
*print_triangle- prints a tingle of "#"
*
*@size: an integer
*Return: no return value
*/
void print_triangle(int size)
{
	if (size > 0)
{
	int i;
	int j;
	int a = size;

	for (i = 0; i < size; ++i)
{
	for (j = 1; j < a; ++j)
{
	putchar(' ');
}
	for (j = -1; j < i; ++j)
{
	putchar('#');
}
	a--;
	putchar('\n');
}
}
	else
	putchar('\n');
}
