#include <stdio.h>
#include "main.h"
/**
*print_line- prints "_" n times
*
*Return: no return value
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		putchar('_');
	}
	putchar('\n');
}

