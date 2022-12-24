#include <stdio.h>
#include "main.h"
/**
*more_numbers- prints numbers from 0 to 14
*
*Return: no return value
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i < 11; ++i)
{
	int j;

	for (j = 0; j < 15; ++j)
{
	printf("%d", j);
}
	putchar('\n');
}
}

