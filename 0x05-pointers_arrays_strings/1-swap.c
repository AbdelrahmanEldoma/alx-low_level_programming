#include <stdio.h>
#include "main.h"

/**
*swap_int-  takes a pointer to an int as parameter and
*updates the value it points to to 98
*
*@a: a pointer
*@b: a pointer
* Return: a void
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
